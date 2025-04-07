#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38210);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a820);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b38230 _public_6b38230
#define public_6b3823f _public_6b3823f
#define public_6b3826a _public_6b3826a
#define public_6b3826c _public_6b3826c
#define public_6b382c0 _public_6b382c0
#define public_6b382ca _public_6b382ca
#define public_6b382d8 _public_6b382d8
#define public_6b382e6 _public_6b382e6

PROC_DECLARE(0x6b38210, internal_6b38210, public_6b38210);
extern "C" NAKED register_t __cdecl internal_6b38210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebp
        mov ebp, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        cmp ebp, eax
        mov dword ptr ss : [esp+8], eax
        je public_6b382e6
        push ebx
        push esi
        push edi
        xor ebx, ebx
        lea esp, ss:[esp]
        public_6b38230 : nop
        cmp byte ptr ss : [esp+0x1C], bl
        jne public_6b3823f
        cmp byte ptr ss : [ebp+0xC], bl
        jne public_6b382d8
        public_6b3823f : nop
        push 0x18
        call public_6b6a134
        add esp, 4
        cmp eax, ebx
        je public_6b3826a
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov word ptr ds : [eax+0xC], bx
        mov byte ptr ds : [eax+0xE], bl
        mov byte ptr ds : [eax+0xF], bl
        mov word ptr ds : [eax+0x10], bx
        mov dword ptr ds : [eax+0x14], ebx
        mov esi, eax
        jmp public_6b3826c
        public_6b3826a : nop
        xor esi, esi
        public_6b3826c : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [esi+4], ecx
        fld dword ptr ss : [ebp+0x10]
        fstp dword ptr ds : [esi+8]
        mov dx, word ptr ss : [ebp+2]
        mov word ptr ds : [esi+0xC], dx
        mov al, byte ptr ss : [ebp+0xC]
        mov ecx, ebp
        mov byte ptr ds : [esi+0xE], al
        call dword ptr ds : [public_6b6b08c]
        test al, al
        jne public_6b382ca
        mov edi, dword ptr ss : [ebp+8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        mov eax, ecx
        xor ecx, ecx
        mov cx, ax
        mov word ptr ds : [esi+0x10], ax
        push ecx
        call public_6b6a134
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov edx, eax
        nop 
        public_6b382c0 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        cmp al, bl
        jne public_6b382c0
        public_6b382ca : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        call public_6b3a820
        mov eax, dword ptr ss : [esp+0x14]
        public_6b382d8 : nop
        add ebp, 0x20
        cmp ebp, eax
        jne public_6b38230
        pop edi
        pop esi
        pop ebx
        public_6b382e6 : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6b38210)
    }
}

#undef public_6b38230
#undef public_6b3823f
#undef public_6b3826a
#undef public_6b3826c
#undef public_6b382c0
#undef public_6b382ca
#undef public_6b382d8
#undef public_6b382e6
