#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7770);
CLANG_FORWARD_PROC_SYMBOL(public_6cf79e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bbf0);

#define public_6d5bc10 _public_6d5bc10
#define public_6d5bc20 _public_6d5bc20
#define public_6d5bc23 _public_6d5bc23
#define public_6d5bc27 _public_6d5bc27
#define public_6d5bc4d _public_6d5bc4d
#define public_6d5bc66 _public_6d5bc66
#define public_6d5bc6f _public_6d5bc6f
#define public_6d5bc82 _public_6d5bc82

PROC_DECLARE(0x6d5bbf0, internal_6d5bbf0, public_6d5bbf0);
extern "C" NAKED register_t __cdecl internal_6d5bbf0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x24]
        sub esp, 8
        push ebx
        lea ebx, ds:[ecx+0x1C]
        mov ecx, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        push edi
        mov edi, ecx
        mov al, 1
        je public_6d5bc27
        nop 
        public_6d5bc10 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_6d5bc20
        mov esi, dword ptr ds : [esi]
        jmp public_6d5bc23
        public_6d5bc20 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d5bc23 : nop
        cmp esi, edx
        jne public_6d5bc10
        public_6d5bc27 : nop
        mov dl, byte ptr ds : [ebx+0xC]
        test dl, dl
        je public_6d5bc4d
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        call public_6cf7770
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d5bc4d : nop
        test al, al
        mov dword ptr ss : [esp+0x10], edi
        je public_6d5bc66
        cmp edi, dword ptr ds : [ecx]
        je public_6d5bc6f
        lea ecx, ss:[esp+0x10]
        call public_6cf79e0
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6d5bc66 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [ecx+0xC], ebp
        jae public_6d5bc82
        public_6d5bc6f : nop
        lea edx, ss:[esp+0x1C]
        push edx
        push edi
        lea eax, ss:[esp+0x1C]
        push esi
        push eax
        mov ecx, ebx
        call public_6cf7770
        public_6d5bc82 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d5bbf0)
    }
}

#undef public_6d5bc10
#undef public_6d5bc20
#undef public_6d5bc23
#undef public_6d5bc27
#undef public_6d5bc4d
#undef public_6d5bc66
#undef public_6d5bc6f
#undef public_6d5bc82
