#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421a70);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);

#define public_59be7c _public_59be7c
#define public_59be80 _public_59be80
#define public_59bf49 _public_59bf49

PROC_DECLARE(0x59bda0, internal_59bda0, public_59bda0);
extern "C" NAKED register_t __cdecl internal_59bda0()
{
    __asm
    {
        mov al, byte ptr ds : [public_67dbc4]
        sub esp, 0x20
        test al, al
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x3E8]
        push edi
        fld dword ptr ds : [esi+0x3E4]
        je public_59be7c
        fld dword ptr ds : [public_5c75e0]
        push ebx
        fmul st, st(1)
        push ebp
        lea eax, ds:[esi+0x3C]
        push eax
        fstp dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_67dbf8 @0x59bdd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fld st(1)
        fmul dword ptr ds : [public_5cef60]
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5cef60]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x18]
        call public_422690
        push 0xDE1
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xBE2
        call public_421ed0
        push 0
        push 0
        push 0xFF
        call public_421a70
        push 7
        call public_421670
        mov edi, dword ptr ss : [esp+0x38]
        mov ebx, dword ptr ss : [esp+0x3C]
        push 0
        push edi
        push ebx
        call public_421cc0
        push 0
        push edi
        mov edi, dword ptr ss : [esp+0x54]
        push edi
        call public_421cc0
        mov ebp, dword ptr ss : [esp+0x5C]
        add esp, 0x40
        push 0
        push ebp
        push edi
        call public_421cc0
        push 0
        push ebp
        push ebx
        call public_421cc0
        add esp, 0x18
        call public_421690
        pop ebp
        pop ebx
        jmp public_59be80
        public_59be7c : nop
        fstp st(0)
        fstp st(0)
        public_59be80 : nop
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        je public_59bf49
        xor ecx, ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], ecx
        lea edi, ds:[esi+0x324]
        push edi
        mov dword ptr ss : [esp+0x28], ecx
        call public_422950
        push 0x29F
/*FIXUP push offset public_5e5874 @0x59beb1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5874
        push edi
        call public_422610
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        push 2
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
/*FIXUP push offset public_67dbf8 @0x59bf28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422950
        push 0x2AD
/*FIXUP push offset public_5e5874 @0x59bf37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5874
/*FIXUP push offset public_67dbf8 @0x59bf3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422610
        add esp, 0x10
        public_59bf49 : nop
        mov ecx, esi
        call public_59e5c0
        pop edi
        pop esi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x59bda0)
    }
}

#undef public_59be7c
#undef public_59be80
#undef public_59bf49
