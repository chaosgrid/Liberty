#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502e40);
CLANG_FORWARD_PROC_SYMBOL(public_532d40);
CLANG_FORWARD_PROC_SYMBOL(public_547680);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0f78);

#define public_5476e1 _public_5476e1
#define public_5476f9 _public_5476f9
#define public_547728 _public_547728
#define public_54772a _public_54772a
#define public_547733 _public_547733

PROC_DECLARE(0x547680, internal_547680, public_547680);
extern "C" NAKED register_t __cdecl internal_547680()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0f78 @0x547682*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0f78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        lea ebx, ds:[esi+0xA0]
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi-0xC], offset public_5e0304
        mov dword ptr ds : [esi-8], offset public_5e0284
        mov dword ptr ds : [esi], offset public_5e0278
        mov dword ptr ds : [ebx], offset public_5e0270
        mov edi, dword ptr ds : [esi+0x1F8]
        test edi, edi
        mov dword ptr ss : [esp+0x18], 0
        je public_5476e1
        mov ecx, edi
        call public_502e40
        push edi
        call public_5b7e1d
        add esp, 4
        public_5476e1 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_547733
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        je public_5476f9
        xor ecx, ecx
        public_5476f9 : nop
        mov eax, dword ptr ds : [public_613ed0]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi-0xC]
        neg eax
        sbb eax, eax
        and eax, ebx
        test ecx, ecx
        je public_547728
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_54772a
        public_547728 : nop
        xor ecx, ecx
        public_54772a : nop
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xBC]
        public_547733 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_532d40
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x547680)
    }
}

#undef public_5476e1
#undef public_5476f9
#undef public_547728
#undef public_54772a
#undef public_547733
