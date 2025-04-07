#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62277e0);
CLANG_FORWARD_PROC_SYMBOL(public_622a4f0);

#define public_62277fa _public_62277fa
#define public_622782f _public_622782f
#define public_6227837 _public_6227837
#define public_622784b _public_622784b
#define public_622787b _public_622787b
#define public_622788d _public_622788d
#define public_6227899 _public_6227899
#define public_622789e _public_622789e
#define public_62278c7 _public_62278c7

PROC_DECLARE(0x62277e0, internal_62277e0, public_62277e0);
extern "C" NAKED register_t __cdecl internal_62277e0()
{
    __asm
    {
        sub esp, 0x12C
        push ebx
        mov ebx, dword ptr ss : [esp+0x134]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x140]
        push edi
        xor ebp, ebp
        public_62277fa : nop
        mov eax, dword ptr ds : [ebx]
        push esi
        push ebx
        call dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [ebx+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[ebx+8]
        mov dword ptr ss : [esp+0x14], eax
        call public_622a4f0
        mov ecx, dword ptr ds : [ebx+0xC]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_622782f
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_622782f
        lea eax, ss:[esp+0x18]
        jmp public_6227837
        public_622782f : nop
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x14]
        public_6227837 : nop
        cmp dword ptr ds : [eax], edi
        je public_62278c7
        test ebp, ebp
        jne public_622789e
        lea edx, ss:[esp+0x3C]
        mov eax, esi
        sub edx, esi
        public_622784b : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_622784b
        mov edi, dword ptr ds : [public_624b068]
        lea eax, ss:[esp+0x3C]
        push 0x23
        push eax
        call edi
        add esp, 8
        test eax, eax
        je public_622787b
        mov byte ptr ds : [eax], 0
        inc eax
        push eax
        call dword ptr ds : [public_624b050]
        add esp, 4
        mov ebp, eax
        public_622787b : nop
        push 0x2E
        push esi
        call edi
        add esp, 8
        test eax, eax
        je public_6227899
        lea edx, ss:[esp+0x1C]
        sub edx, eax
        public_622788d : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_622788d
        jmp public_622789e
        public_6227899 : nop
        mov byte ptr ss : [esp+0x1C], 0
        public_622789e : nop
        lea ecx, ss:[esp+0x1C]
        inc ebp
        push ecx
        lea edx, ss:[esp+0x40]
        push ebp
        push edx
/*FIXUP push offset public_6256188 @0x62278aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256188
/*FIXUP push offset public_6257d80 @0x62278af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257d80
        call dword ptr ds : [public_624b064]
        add esp, 0x14
        mov esi, offset public_6257d80
        jmp public_62277fa
        public_62278c7 : nop
        mov eax, dword ptr ss : [esp+0x148]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x12C
        ret 0xC
        UNREACHABLE_TRAP(0x62277e0)
    }
}

#undef public_62277fa
#undef public_622782f
#undef public_6227837
#undef public_622784b
#undef public_622787b
#undef public_622788d
#undef public_6227899
#undef public_622789e
#undef public_62278c7
