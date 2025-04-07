#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16500);
CLANG_FORWARD_PROC_SYMBOL(public_6d17050);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16507 _public_6d16507
#define public_6d16510 _public_6d16510
#define public_6d16513 _public_6d16513
#define public_6d16531 _public_6d16531
#define public_6d1653c _public_6d1653c
#define public_6d1653e _public_6d1653e
#define public_6d16556 _public_6d16556
#define public_6d16560 _public_6d16560
#define public_6d16589 _public_6d16589
#define public_6d1658e _public_6d1658e
#define public_6d165a4 _public_6d165a4
#define public_6d165ac _public_6d165ac
#define public_6d165b7 _public_6d165b7
#define public_6d165cd _public_6d165cd
#define public_6d165d6 _public_6d165d6

PROC_DECLARE(0x6d16500, internal_6d16500, public_6d16500);
extern "C" NAKED register_t __cdecl internal_6d16500()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        xor ebp, ebp
        public_6d16507 : nop
        test ebp, ebp
        jne public_6d16510
        mov ebp, dword ptr ds : [ebx+8]
        jmp public_6d16513
        public_6d16510 : nop
        mov ebp, dword ptr ss : [ebp]
        public_6d16513 : nop
        test ebp, ebp
        je public_6d165d6
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        je public_6d16507
        push edi
        xor edi, edi
        public_6d16531 : nop
        test edi, edi
        jne public_6d1653c
        mov edx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [edx+4]
        jmp public_6d1653e
        public_6d1653c : nop
        mov edi, dword ptr ds : [edi]
        public_6d1653e : nop
        test edi, edi
        je public_6d16560
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov ecx, dword ptr ds : [esi+4]
        je public_6d16556
        test ecx, ecx
        je public_6d16556
        cmp ecx, eax
        jne public_6d16531
        public_6d16556 : nop
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        jmp public_6d16531
        public_6d16560 : nop
        mov ecx, esi
        call public_6d17050
        push esi
        call public_6d5ffb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp eax, ebp
        pop edi
        jne public_6d1658e
        mov eax, dword ptr ss : [ebp]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ds : [ebx+8], eax
        jne public_6d16589
        mov dword ptr ds : [ebx+0xC], ecx
        jmp public_6d165b7
        public_6d16589 : nop
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d165b7
        public_6d1658e : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, ebp
        jne public_6d165ac
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ds : [ebx+0xC], eax
        jne public_6d165a4
        mov dword ptr ds : [ebx+8], eax
        jmp public_6d165b7
        public_6d165a4 : nop
        mov dword ptr ds : [eax], 0
        jmp public_6d165b7
        public_6d165ac : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ecx+4], eax
        public_6d165b7 : nop
        mov al, byte ptr ds : [ebx+0x10]
        test al, al
        je public_6d165cd
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp], eax
        pop esi
        mov dword ptr ds : [ebx+0x14], ebp
        pop ebp
        pop ebx
        ret 4
        public_6d165cd : nop
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6d165d6 : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d16500)
    }
}

#undef public_6d16507
#undef public_6d16510
#undef public_6d16513
#undef public_6d16531
#undef public_6d1653c
#undef public_6d1653e
#undef public_6d16556
#undef public_6d16560
#undef public_6d16589
#undef public_6d1658e
#undef public_6d165a4
#undef public_6d165ac
#undef public_6d165b7
#undef public_6d165cd
#undef public_6d165d6
