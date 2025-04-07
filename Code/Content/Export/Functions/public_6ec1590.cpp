#include "Content-PCH.h"


#define public_6ec15f4 _public_6ec15f4
#define public_6ec162d _public_6ec162d
#define public_6ec1645 _public_6ec1645

PROC_DECLARE(0x6ec1590, internal_6ec1590, public_6ec1590);
extern "C" NAKED register_t __cdecl internal_6ec1590()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x10]
        mov ebx, dword ptr ds : [public_6fb306c]
        push 1
        mov ecx, esi
        call ebx
        test al, al
        jne public_6ec15f4
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6fb4448]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x1C]
        fmulp 
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [edi+0x10]
        public_6ec15f4 : nop
        push 2
        mov ecx, esi
        call ebx
        test al, al
        jne public_6ec1645
        mov ebx, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fb58b4 @0x6ec1604*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb58b4
        push 2
        mov ecx, esi
        call ebx
        mov ebp, dword ptr ds : [public_6fb3294]
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6ec162d
        mov byte ptr ds : [edi+0x14], 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
/*FIXUP public_6ec162d : nop
        push offset public_6fb58a0 @0x6ec162d*/
  FIXUP public_6ec162d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb58a0
        push 2
        mov ecx, esi
        call ebx
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6ec1645
        mov byte ptr ds : [edi+0x14], al
        public_6ec1645 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ec1590)
    }
}

#undef public_6ec15f4
#undef public_6ec162d
#undef public_6ec1645
