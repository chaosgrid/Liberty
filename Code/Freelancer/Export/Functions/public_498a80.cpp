#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_498a80);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);

#define public_498ad0 _public_498ad0
#define public_498afd _public_498afd
#define public_498b33 _public_498b33
#define public_498b3c _public_498b3c
#define public_498b4c _public_498b4c
#define public_498b5b _public_498b5b
#define public_498b65 _public_498b65
#define public_498bac _public_498bac
#define public_498bb9 _public_498bb9

PROC_DECLARE(0x498a80, internal_498a80, public_498a80);
extern "C" NAKED register_t __cdecl internal_498a80()
{
    __asm
    {
        sub esp, 0x120
        push ebx
        xor ebx, ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x7E0]
        push esi
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        mov dword ptr ss : [esp+0x70], ebx
        mov byte ptr ss : [esp+0x74], bl
        mov dword ptr ss : [esp+0xA0], ebx
        mov byte ptr ss : [esp+0xA4], bl
        mov dword ptr ss : [esp+0xE4], ebx
        mov byte ptr ss : [esp+0xE8], bl
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x3C]
        xor esi, esi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        jbe public_498b3c
        nop 
        public_498ad0 : nop
        mov ecx, dword ptr ss : [ebp+0x7E0]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        call dword ptr ds : [edx+0x40]
        test al, al
        je public_498b33
        mov ecx, dword ptr ss : [esp+0x68]
        push ecx
        call dword ptr ds : [public_5c61f8]
        add esp, 4
        cmp eax, ebx
        je public_498afd
        test byte ptr ds : [eax+0x10], 0x84
        jne public_498b33
        public_498afd : nop
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [public_5c6020]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x1F]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x27], bl
        call public_4c4da0
        mov al, byte ptr ss : [esp+0x27]
        or al, byte ptr ss : [esp+0x140]
        add esp, 0x14
        test al, 1
        mov byte ptr ss : [esp+0x13], al
        jne public_498bb9
        public_498b33 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc esi
        cmp esi, eax
        jb public_498ad0
        public_498b3c : nop
        mov ecx, dword ptr ss : [ebp+0xB90]
        cmp ecx, ebx
        jne public_498b4c
        mov dword ptr ss : [esp+0x14], ebx
        jmp public_498b5b
        public_498b4c : nop
        mov eax, dword ptr ss : [ebp+0xB94]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x14], eax
        public_498b5b : nop
        mov eax, dword ptr ss : [esp+0x14]
        xor edi, edi
        cmp eax, ebx
        jle public_498bac
        public_498b65 : nop
        mov edx, dword ptr ss : [ebp+0xB90]
        mov esi, dword ptr ds : [edx+edi*4]
        push ebx
        push 1
        lea eax, ss:[esp+0x1B]
        mov byte ptr ss : [esp+0x1B], bl
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        push eax
        call public_4c4da0
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        mov ecx, esi
        call dword ptr ds : [eax+0x80]
        mov cl, byte ptr ss : [esp+0x13]
        or cl, al
        test cl, 1
        mov byte ptr ss : [esp+0x13], cl
        jne public_498bb9
        mov eax, dword ptr ss : [esp+0x14]
        inc edi
        cmp edi, eax
        jl public_498b65
        public_498bac : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x120
        ret 
        public_498bb9 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x120
        ret 
        UNREACHABLE_TRAP(0x498a80)
    }
}

#undef public_498ad0
#undef public_498afd
#undef public_498b33
#undef public_498b3c
#undef public_498b4c
#undef public_498b5b
#undef public_498b65
#undef public_498bac
#undef public_498bb9
