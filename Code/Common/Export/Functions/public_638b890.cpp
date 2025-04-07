#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_638b340);
CLANG_FORWARD_PROC_SYMBOL(public_638b890);

#define public_638b8da _public_638b8da
#define public_638b926 _public_638b926
#define public_638b935 _public_638b935

PROC_DECLARE(0x638b890, internal_638b890, public_638b890);
extern "C" NAKED register_t __cdecl internal_638b890()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        je public_638b935
        mov eax, dword ptr ds : [public_658b8c8]
        inc eax
/*FIXUP push offset public_63f9a84 @0x638b8ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9a84
        push edi
        mov dword ptr ds : [public_658b8c8], eax
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [ebp+0xC]
        add esp, 8
        test eax, eax
        je public_638b926
        mov esi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_638b926
        mov ebx, dword ptr ss : [ebp+0x14]
        public_638b8da : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [esi+0x14]
        push ebx
        push eax
        push ebx
        push eax
        and ecx, 0xFFFFFF
        push ecx
        push ebx
        push eax
/*FIXUP push offset public_63f9a58 @0x638b8ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9a58
        push edi
        call dword ptr ds : [public_63991e8]
        mov edx, dword ptr ds : [esi+8]
        push edx
        push edi
        call public_638b340
        add esp, 0x2C
/*FIXUP push offset public_63f9a54 @0x638b906*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9a54
        push edi
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        add esp, 8
        test esi, esi
        mov dword ptr ss : [esp+0xC], eax
        jne public_638b8da
/*FIXUP public_638b926 : nop
        push offset public_63f9a4c @0x638b926*/
  FIXUP public_638b926 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9a4c
        push edi
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638b935 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638b890)
    }
}

#undef public_638b8da
#undef public_638b926
#undef public_638b935
