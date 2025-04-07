#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_638bc40);

#define public_638bc74 _public_638bc74
#define public_638bc9f _public_638bc9f
#define public_638bcac _public_638bcac

PROC_DECLARE(0x638bc40, internal_638bc40, public_638bc40);
extern "C" NAKED register_t __cdecl internal_638bc40()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_638bcac
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        push edi
        push eax
        call dword ptr ds : [public_63992d8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [public_63991e8]
        add esp, 8
        test eax, eax
        je public_638bc9f
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638bc9f
        public_638bc74 : nop
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+8]
        and ecx, 0xFFFFFF
        push ecx
        push edx
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f9dc4 @0x638bc8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9dc4
        push edi
        call ebx
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        add esi, 4
        test eax, eax
        jne public_638bc74
/*FIXUP public_638bc9f : nop
        push offset public_63edccc @0x638bc9f*/
  FIXUP public_638bc9f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call ebx
        add esp, 8
        pop esi
        pop ebx
        public_638bcac : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x638bc40)
    }
}

#undef public_638bc74
#undef public_638bc9f
#undef public_638bcac
