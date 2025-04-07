#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e50);
CLANG_FORWARD_PROC_SYMBOL(public_6614420);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6614448 _public_6614448
#define public_661447f _public_661447f
#define public_6614485 _public_6614485
#define public_66144a3 _public_66144a3
#define public_66144c6 _public_66144c6
#define public_66144e8 _public_66144e8
#define public_66144ef _public_66144ef
#define public_6614505 _public_6614505
#define public_661450c _public_661450c
#define public_6614516 _public_6614516
#define public_661451f _public_661451f

PROC_DECLARE(0x6614420, internal_6614420, public_6614420);
extern "C" NAKED register_t __cdecl internal_6614420()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        je public_661451f
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov dword ptr ds : [ebx+4], eax
        je public_6614448
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6614448 : nop
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [ebx+0x10], ecx
        mov dl, byte ptr ds : [edi+0x14]
        mov byte ptr ds : [ebx+0x14], dl
        mov eax, dword ptr ds : [edi+0x18]
        test eax, eax
        je public_661447f
        mov ecx, dword ptr ds : [edi+0x1C]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_661447f : nop
        test eax, eax
        jge public_6614485
        xor eax, eax
        public_6614485 : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_66281dc
        mov dword ptr ds : [ebx+0x18], eax
        mov ebp, dword ptr ds : [edi+0x1C]
        mov edi, dword ptr ds : [edi+0x18]
        add esp, 4
        cmp edi, ebp
        mov esi, eax
        je public_6614516
        public_66144a3 : nop
        xor eax, eax
        cmp esi, eax
        je public_661450c
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], eax
        mov ecx, esi
        mov dword ptr ds : [esi+8], eax
        call public_6612e50
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_66144c6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_66144c6 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_66144e8
        push eax
        call dword ptr ds : [public_662906c]
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        jmp public_66144ef
        public_66144e8 : nop
        mov dword ptr ds : [esi+0xC], 0
        public_66144ef : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6614505
        push eax
        call dword ptr ds : [public_662906c]
        add esp, 4
        mov dword ptr ds : [esi+0x10], eax
        jmp public_661450c
        public_6614505 : nop
        mov dword ptr ds : [esi+0x10], 0
        public_661450c : nop
        add edi, 0x14
        add esi, 0x14
        cmp edi, ebp
        jne public_66144a3
        public_6614516 : nop
        mov dword ptr ds : [ebx+0x1C], esi
        mov dword ptr ds : [ebx+0x20], esi
        pop edi
        pop esi
        pop ebp
        public_661451f : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6614420)
    }
}

#undef public_6614448
#undef public_661447f
#undef public_6614485
#undef public_66144a3
#undef public_66144c6
#undef public_66144e8
#undef public_66144ef
#undef public_6614505
#undef public_661450c
#undef public_6614516
#undef public_661451f
