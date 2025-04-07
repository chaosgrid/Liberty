#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66156f0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6615712 _public_6615712
#define public_661571d _public_661571d
#define public_661572b _public_661572b
#define public_6615731 _public_6615731
#define public_6615740 _public_6615740
#define public_6615746 _public_6615746
#define public_6615756 _public_6615756
#define public_661576c _public_661576c
#define public_661577a _public_661577a
#define public_6615780 _public_6615780
#define public_661578f _public_661578f
#define public_6615795 _public_6615795
#define public_66157a5 _public_66157a5
#define public_66157b3 _public_66157b3
#define public_66157b9 _public_66157b9
#define public_66157c8 _public_66157c8
#define public_66157ce _public_66157ce

PROC_DECLARE(0x66156f0, internal_66156f0, public_66156f0);
extern "C" NAKED register_t __cdecl internal_66156f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov esi, dword ptr ds : [ebx+8]
        mov edi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, 1
        jne public_6615712
        push ecx
        push eax
        mov ecx, edi
        call public_66156f0
        jmp public_6615756
        public_6615712 : nop
        test ecx, ecx
        jne public_661571d
        mov ecx, dword ptr ds : [eax+0x14]
        or dword ptr ds : [ecx+0x34], 2
        public_661571d : nop
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        jne public_661572b
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edi], ecx
        jmp public_6615731
        public_661572b : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        public_6615731 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_6615740
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+4], ecx
        jmp public_6615746
        public_6615740 : nop
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        public_6615746 : nop
        mov edx, dword ptr ds : [edi+8]
        push eax
        dec edx
        mov dword ptr ds : [edi+8], edx
        call public_66281d0
        add esp, 4
        public_6615756 : nop
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        je public_66157a5
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_661576c
        mov eax, dword ptr ds : [esi+0x14]
        or dword ptr ds : [eax+0x34], 2
        public_661576c : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_661577a
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi], eax
        jmp public_6615780
        public_661577a : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        public_6615780 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_661578f
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+4], edx
        jmp public_6615795
        public_661578f : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        public_6615795 : nop
        mov edx, dword ptr ds : [edi+8]
        push esi
        dec edx
        mov dword ptr ds : [edi+8], edx
        call public_66281d0
        add esp, 4
        public_66157a5 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jne public_66157b3
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [edi], edx
        jmp public_66157b9
        public_66157b3 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        public_66157b9 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        jne public_66157c8
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edi+4], edx
        jmp public_66157ce
        public_66157c8 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], ecx
        public_66157ce : nop
        mov edx, dword ptr ds : [edi+8]
        push ebx
        dec edx
        mov dword ptr ds : [edi+8], edx
        call public_66281d0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66156f0)
    }
}

#undef public_6615712
#undef public_661571d
#undef public_661572b
#undef public_6615731
#undef public_6615740
#undef public_6615746
#undef public_6615756
#undef public_661576c
#undef public_661577a
#undef public_6615780
#undef public_661578f
#undef public_6615795
#undef public_66157a5
#undef public_66157b3
#undef public_66157b9
#undef public_66157c8
#undef public_66157ce
