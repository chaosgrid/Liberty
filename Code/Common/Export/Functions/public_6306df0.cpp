#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6306720);
CLANG_FORWARD_PROC_SYMBOL(public_6306fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d3c);
CLANG_FORWARD_PROC_SYMBOL(public_6391d42);
CLANG_FORWARD_PROC_SYMBOL(public_6391d48);
CLANG_FORWARD_PROC_SYMBOL(public_6391d4e);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6396106);

#define public_6306e5f _public_6306e5f
#define public_6306e78 _public_6306e78
#define public_6306f20 _public_6306f20

PROC_DECLARE(0x6306df0, internal_6306df0, public_6306df0);
extern "C" NAKED register_t __cdecl internal_6306df0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6396106 @0x6306df8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396106
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x21B8
        mov dword ptr fs : [0], esp
        call public_6391dc0
        lea ecx, ss:[esp]
        call public_6391d3c
        lea eax, ss:[esp]
        push eax
        mov dword ptr ss : [esp+0x21C4], 0
        call public_6306720
        add esp, 4
        test al, al
        jne public_6306e5f
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp+0x21C0], 0xFFFFFFFF
        call public_6391d30
        xor al, al
        mov ecx, dword ptr ss : [esp+0x21B8]
        mov dword ptr fs : [0], ecx
        add esp, 0x21C4
        ret 
        public_6306e5f : nop
        mov eax, dword ptr ds : [public_63fceb4]
        test eax, eax
        je public_6306e78
        push 4
/*FIXUP push offset public_63fceb4 @0x6306e6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fceb4
        lea ecx, ss:[esp+8]
        call public_6391d4e
        public_6306e78 : nop
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x10]
        call public_6391d48
        lea ecx, ss:[esp+0x10]
        call public_6391d42
        mov esi, eax
        push esi
        lea ecx, ss:[esp+0x1CC]
/*FIXUP push offset public_63a30c4 @0x6306e98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30c4
        push ecx
        call public_6306fe0
        mov ebp, dword ptr ds : [public_639911c]
        add esp, 0xC
        push eax
        call ebp
        lea ecx, ss:[esp+0xEC]
        call public_6391d3c
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea edx, ss:[esp+0x1CC]
/*FIXUP push offset public_63a30b0 @0x6306ecf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30b0
        push edx
        mov byte ptr ss : [esp+0x21DC], 1
        call public_6306fe0
        add esp, 0xC
        push eax
        call ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ss:[esp+0xF4]
        call public_6391d4e
        lea ecx, ss:[esp+0xEC]
        call public_6391d48
        mov ebx, dword ptr ss : [esp+0x21D8]
        mov ecx, ebx
        mov eax, esi
        sub ecx, esi
        nop 
        lea esp, ss:[esp]
        public_6306f20 : nop
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [ecx+eax], dl
        inc eax
        test dl, dl
        jne public_6306f20
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        mov ax, word ptr ds : [public_63a30ac]
        lea ecx, ss:[esp+0xEC]
        mov word ptr ds : [edi-1], ax
        call public_6391d42
        mov esi, eax
        push esi
        lea ecx, ss:[esp+0x1CC]
/*FIXUP push offset public_63a3098 @0x6306f53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3098
        push ecx
        call public_6306fe0
        add esp, 0xC
        push eax
        call ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        lea edi, ds:[ecx+esi-4]
        or ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov edi, ebx
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        lea ecx, ss:[esp+0xEC]
        mov byte ptr ss : [esp+0x21D0], al
        call public_6391d30
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x21D0], 0xFFFFFFFF
        call public_6391d30
        mov ecx, dword ptr ss : [esp+0x21C8]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x21C4
        ret 
        UNREACHABLE_TRAP(0x6306df0)
    }
}

#undef public_6306e5f
#undef public_6306e78
#undef public_6306f20
