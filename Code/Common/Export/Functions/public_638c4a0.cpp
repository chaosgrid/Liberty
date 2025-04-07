#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_638c4a0);

#define public_638c500 _public_638c500
#define public_638c518 _public_638c518
#define public_638c525 _public_638c525

PROC_DECLARE(0x638c4a0, internal_638c4a0, public_638c4a0);
extern "C" NAKED register_t __cdecl internal_638c4a0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_638c525
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        push ebx
        push esi
        push ecx
        call public_6370570
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        push eax
        mov eax, dword ptr ds : [edx+8]
        push eax
        call public_6370570
        mov esi, dword ptr ss : [esp+0x24]
        add esp, 4
        push eax
        push esi
        call public_636ec10
        mov ebx, dword ptr ds : [public_63991e8]
        add esp, 4
        add eax, 2
        push eax
/*FIXUP push offset public_63f9e88 @0x638c4e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9e88
        push edi
        call ebx
        add esp, 0x14
        test esi, esi
        je public_638c518
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_638c518
        public_638c500 : nop
        mov ecx, dword ptr ds : [eax+0x48]
        push ecx
/*FIXUP push offset public_63f10fc @0x638c504*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10fc
        push edi
        call ebx
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_638c500
/*FIXUP public_638c518 : nop
        push offset public_63edccc @0x638c518*/
  FIXUP public_638c518 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call ebx
        add esp, 8
        pop esi
        pop ebx
        public_638c525 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x638c4a0)
    }
}

#undef public_638c500
#undef public_638c518
#undef public_638c525
