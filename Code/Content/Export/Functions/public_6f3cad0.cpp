#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3cad0);

#define public_6f3cb20 _public_6f3cb20
#define public_6f3cb39 _public_6f3cb39
#define public_6f3cb4e _public_6f3cb4e
#define public_6f3cb67 _public_6f3cb67
#define public_6f3cb80 _public_6f3cb80
#define public_6f3cb99 _public_6f3cb99
#define public_6f3cbb2 _public_6f3cbb2
#define public_6f3cbcb _public_6f3cbcb
#define public_6f3cbfc _public_6f3cbfc

PROC_DECLARE(0x6f3cad0, internal_6f3cad0, public_6f3cad0);
extern "C" NAKED register_t __cdecl internal_6f3cad0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_6fbabe0]
        mov cl, byte ptr ds : [public_6fbabe4]
        push ebx
        push edi
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        mov byte ptr ss : [esp+0x14], cl
        call dword ptr ds : [public_6fb3368]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, eax
        add esp, 8
        xor ebx, ebx
        test edi, edi
        je public_6f3cbfc
        push ebp
        mov ebp, dword ptr ds : [public_6fb3294]
        push esi
        lea esi, ds:[ecx+0xAC]
        lea esp, ss:[esp]
/*FIXUP public_6f3cb20 : nop
        push offset public_6fbabd4 @0x6f3cb20*/
  FIXUP public_6f3cb20 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbabd4
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3cb39
        mov dword ptr ds : [esi], 6
        inc ebx
        add esi, 4
/*FIXUP public_6f3cb39 : nop
        push offset public_6fbad94 @0x6f3cb39*/
  FIXUP public_6f3cb39 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad94
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3cb4e
        mov dword ptr ds : [esi], eax
        inc ebx
        add esi, 4
/*FIXUP public_6f3cb4e : nop
        push offset public_6fbadc0 @0x6f3cb4e*/
  FIXUP public_6f3cb4e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbadc0
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3cb67
        mov dword ptr ds : [esi], 1
        inc ebx
        add esi, 4
/*FIXUP public_6f3cb67 : nop
        push offset public_6fbadb4 @0x6f3cb67*/
  FIXUP public_6f3cb67 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbadb4
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3cb80
        mov dword ptr ds : [esi], 2
        inc ebx
        add esi, 4
/*FIXUP public_6f3cb80 : nop
        push offset public_6fbadac @0x6f3cb80*/
  FIXUP public_6f3cb80 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbadac
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3cb99
        mov dword ptr ds : [esi], 3
        inc ebx
        add esi, 4
/*FIXUP public_6f3cb99 : nop
        push offset public_6fbada4 @0x6f3cb99*/
  FIXUP public_6f3cb99 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbada4
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3cbb2
        mov dword ptr ds : [esi], 4
        inc ebx
        add esi, 4
/*FIXUP public_6f3cbb2 : nop
        push offset public_6fbad9c @0x6f3cbb2*/
  FIXUP public_6f3cbb2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad9c
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3cbcb
        mov dword ptr ds : [esi], 5
        inc ebx
        add esi, 4
        public_6f3cbcb : nop
        lea edx, ss:[esp+0x10]
        push edx
        push 0
        call dword ptr ds : [public_6fb3368]
        mov edi, eax
        add esp, 8
        test edi, edi
        jne public_6f3cb20
        mov eax, dword ptr ss : [esp+0x1C]
        pop esi
        pop ebp
        pop edi
        mov dword ptr ds : [eax+ebx*4+0xAC], 7
        pop ebx
        add esp, 8
        ret 
        public_6f3cbfc : nop
        pop edi
        mov dword ptr ds : [ecx+ebx*4+0xAC], 7
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f3cad0)
    }
}

#undef public_6f3cb20
#undef public_6f3cb39
#undef public_6f3cb4e
#undef public_6f3cb67
#undef public_6f3cb80
#undef public_6f3cb99
#undef public_6f3cbb2
#undef public_6f3cbcb
#undef public_6f3cbfc
