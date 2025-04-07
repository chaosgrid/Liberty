#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6384150);

#define public_6384185 _public_6384185
#define public_63841b2 _public_63841b2
#define public_63841d0 _public_63841d0
#define public_63841ee _public_63841ee

PROC_DECLARE(0x6384150, internal_6384150, public_6384150);
extern "C" NAKED register_t __cdecl internal_6384150()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push ebx
        push esi
        push edi
        je public_63841b2
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [public_63991e8]
        push eax
/*FIXUP push offset public_639c454 @0x6384166*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c454
        push edi
        call ebx
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0xC
        test eax, eax
        je public_63841ee
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_63841ee
        public_6384185 : nop
        push eax
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f7268 @0x638418f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7268
        push edi
        call ebx
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_6384185
/*FIXUP push offset public_63edccc @0x63841a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call ebx
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 
        public_63841b2 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [public_63991e8]
        je public_63841ee
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_63841ee
        public_63841d0 : nop
        push eax
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f10fc @0x63841da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10fc
        push edi
        call ebx
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_63841d0
/*FIXUP public_63841ee : nop
        push offset public_63edccc @0x63841ee*/
  FIXUP public_63841ee : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call ebx
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6384150)
    }
}

#undef public_6384185
#undef public_63841b2
#undef public_63841d0
#undef public_63841ee
