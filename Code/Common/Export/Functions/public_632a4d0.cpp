#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a2250);
CLANG_FORWARD_PROC_SYMBOL(public_6325bb0);
CLANG_FORWARD_PROC_SYMBOL(public_632a550);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

#define public_632a501 _public_632a501
#define public_632a509 _public_632a509
#define public_632a516 _public_632a516
#define public_632a543 _public_632a543

PROC_DECLARE(0x632a4d0, internal_632a4d0, public_632a4d0);
extern "C" NAKED register_t __cdecl internal_632a4d0()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_6401950
        call public_62a2250
        mov ecx, dword ptr ds : [public_6401954]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_632a501
        mov dx, word ptr ss : [esp+0xC]
        cmp dx, word ptr ds : [eax+0xC]
        jb public_632a501
        lea eax, ss:[esp]
        jmp public_632a509
        public_632a501 : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_632a509 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_632a516
        add eax, 0x10
        add esp, 8
        ret 
        public_632a516 : nop
        mov cl, byte ptr ds : [public_640194c]
        mov al, 1
        test al, cl
        jne public_632a543
        mov dl, cl
        or dl, al
        mov ecx, offset public_6401940
        mov byte ptr ds : [public_640194c], dl
        call public_6325bb0
/*FIXUP push offset _public_632a550 @0x632a536*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_632a550
        call public_6391f9e
        add esp, 4
        public_632a543 : nop
        mov eax, offset public_6401940
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x632a4d0)
    }
}

#undef public_632a501
#undef public_632a509
#undef public_632a516
#undef public_632a543
