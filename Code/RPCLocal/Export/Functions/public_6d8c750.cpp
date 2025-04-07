#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8c750);
CLANG_FORWARD_PROC_SYMBOL(public_6d91580);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8c770 _public_6d8c770
#define public_6d8c77f _public_6d8c77f
#define public_6d8c7aa _public_6d8c7aa
#define public_6d8c7ac _public_6d8c7ac
#define public_6d8c800 _public_6d8c800
#define public_6d8c80a _public_6d8c80a
#define public_6d8c818 _public_6d8c818
#define public_6d8c826 _public_6d8c826

PROC_DECLARE(0x6d8c750, internal_6d8c750, public_6d8c750);
extern "C" NAKED register_t __cdecl internal_6d8c750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebp
        mov ebp, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        cmp ebp, eax
        mov dword ptr ss : [esp+8], eax
        je public_6d8c826
        push ebx
        push esi
        push edi
        xor ebx, ebx
        lea esp, ss:[esp]
        public_6d8c770 : nop
        cmp byte ptr ss : [esp+0x1C], bl
        jne public_6d8c77f
        cmp byte ptr ss : [ebp+0xC], bl
        jne public_6d8c818
        public_6d8c77f : nop
        push 0x18
        call public_6db1f8a
        add esp, 4
        cmp eax, ebx
        je public_6d8c7aa
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov word ptr ds : [eax+0xC], bx
        mov byte ptr ds : [eax+0xE], bl
        mov byte ptr ds : [eax+0xF], bl
        mov word ptr ds : [eax+0x10], bx
        mov dword ptr ds : [eax+0x14], ebx
        mov esi, eax
        jmp public_6d8c7ac
        public_6d8c7aa : nop
        xor esi, esi
        public_6d8c7ac : nop
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
        call dword ptr ds : [public_6db30d8]
        test al, al
        jne public_6d8c80a
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
        call public_6db1f8a
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov edx, eax
        nop 
        public_6d8c800 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        cmp al, bl
        jne public_6d8c800
        public_6d8c80a : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        call public_6d91580
        mov eax, dword ptr ss : [esp+0x14]
        public_6d8c818 : nop
        add ebp, 0x20
        cmp ebp, eax
        jne public_6d8c770
        pop edi
        pop esi
        pop ebx
        public_6d8c826 : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d8c750)
    }
}

#undef public_6d8c770
#undef public_6d8c77f
#undef public_6d8c7aa
#undef public_6d8c7ac
#undef public_6d8c800
#undef public_6d8c80a
#undef public_6d8c818
#undef public_6d8c826
