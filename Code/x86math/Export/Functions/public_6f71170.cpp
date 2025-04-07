#include "x86math-PCH.h"


#define public_6f711bb _public_6f711bb
#define public_6f711d3 _public_6f711d3
#define public_6f711de _public_6f711de

PROC_DECLARE(0x6f71170, internal_6f71170, public_6f71170);
extern "C" NAKED register_t __cdecl internal_6f71170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        test eax, eax
        push edi
        mov dword ptr ds : [ebx], 0
        je public_6f711de
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_6f711de
        cmp dword ptr ds : [eax], 0xC
        jne public_6f711d3
        mov esi, offset public_6f74020
        mov ecx, 0xD
        xor edx, edx
        repe cmpsb
        jne public_6f711d3
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_6f711bb
        push eax
/*FIXUP push offset public_6f73060 @0x6f711a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f73060
        call dword ptr ds : [public_6f73000]
        add esp, 8
        test eax, eax
        jne public_6f711d3
        public_6f711bb : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax-4]
        lea esi, ds:[eax-4]
        push esi
        call dword ptr ds : [ecx+4]
        mov dword ptr ds : [ebx], esi
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        public_6f711d3 : nop
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f711de : nop
        pop edi
        pop esi
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f71170)
    }
}

#undef public_6f711bb
#undef public_6f711d3
#undef public_6f711de
