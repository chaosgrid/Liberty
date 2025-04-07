#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7440);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7770);
CLANG_FORWARD_PROC_SYMBOL(public_6cf79e0);

#define public_6cf7460 _public_6cf7460
#define public_6cf7483 _public_6cf7483
#define public_6cf7485 _public_6cf7485
#define public_6cf74b6 _public_6cf74b6
#define public_6cf74c6 _public_6cf74c6
#define public_6cf74c9 _public_6cf74c9
#define public_6cf74cd _public_6cf74cd
#define public_6cf74e2 _public_6cf74e2
#define public_6cf74f4 _public_6cf74f4
#define public_6cf7501 _public_6cf7501
#define public_6cf750e _public_6cf750e
#define public_6cf7516 _public_6cf7516
#define public_6cf751d _public_6cf751d
#define public_6cf7538 _public_6cf7538

PROC_DECLARE(0x6cf7440, internal_6cf7440, public_6cf7440);
extern "C" NAKED register_t __cdecl internal_6cf7440()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp], ecx
        je public_6cf7538
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        push edi
        public_6cf7460 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_6cf751d
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6cf7483
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cf7485
        public_6cf7483 : nop
        xor eax, eax
        public_6cf7485 : nop
        mov ebx, dword ptr ds : [eax+0xB4]
        test ebx, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        je public_6cf751d
        mov al, byte ptr ds : [ecx+0x2F0]
        test al, al
        je public_6cf751d
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [ebp+8]
        cmp esi, edx
        mov edi, ecx
        mov al, 1
        je public_6cf74cd
        public_6cf74b6 : nop
        cmp ebx, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_6cf74c6
        mov esi, dword ptr ds : [esi]
        jmp public_6cf74c9
        public_6cf74c6 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6cf74c9 : nop
        cmp esi, edx
        jne public_6cf74b6
        public_6cf74cd : nop
        mov dl, byte ptr ss : [ebp+0xC]
        test dl, dl
        je public_6cf74e2
        lea eax, ss:[esp+0x2C]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x28]
        push ecx
        jmp public_6cf7516
        public_6cf74e2 : nop
        test al, al
        mov dword ptr ss : [esp+0x14], edi
        je public_6cf7501
        cmp edi, dword ptr ds : [ecx]
        jne public_6cf74f4
        lea eax, ss:[esp+0x20]
        jmp public_6cf750e
        public_6cf74f4 : nop
        lea ecx, ss:[esp+0x14]
        call public_6cf79e0
        mov ebx, dword ptr ss : [esp+0x2C]
        public_6cf7501 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [ecx+0xC], ebx
        jae public_6cf751d
        lea eax, ss:[esp+0x24]
        public_6cf750e : nop
        lea edx, ss:[esp+0x2C]
        push edx
        push edi
        push esi
        push eax
        public_6cf7516 : nop
        mov ecx, ebp
        call public_6cf7770
        public_6cf751d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6cf7460
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6cf7538 : nop
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6cf7440)
    }
}

#undef public_6cf7460
#undef public_6cf7483
#undef public_6cf7485
#undef public_6cf74b6
#undef public_6cf74c6
#undef public_6cf74c9
#undef public_6cf74cd
#undef public_6cf74e2
#undef public_6cf74f4
#undef public_6cf7501
#undef public_6cf750e
#undef public_6cf7516
#undef public_6cf751d
#undef public_6cf7538
