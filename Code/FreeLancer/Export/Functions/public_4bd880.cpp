#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4bd880);
CLANG_FORWARD_PROC_SYMBOL(public_4bda70);
CLANG_FORWARD_PROC_SYMBOL(public_577dd0);
CLANG_FORWARD_PROC_SYMBOL(public_577f50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_4bd985 _public_4bd985
#define public_4bd994 _public_4bd994
#define public_4bd99d _public_4bd99d
#define public_4bd9da _public_4bd9da
#define public_4bda43 _public_4bda43

PROC_DECLARE(0x4bd880, internal_4bd880, public_4bd880);
extern "C" NAKED register_t __cdecl internal_4bd880()
{
    __asm
    {
        mov eax, 0x1210
        call public_5b7e90
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x1220]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi+0xF4], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+0xF8], ecx
        lea edx, ds:[edi+0x48]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[esi+0x13C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea eax, ds:[edi+0x54]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x148]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ds : [edi+0x60]
        mov al, 0xFF
        mov byte ptr ss : [esp+0xF], al
        mov byte ptr ds : [esi+0x154], cl
        mov byte ptr ss : [esp+0xC], 0x43
        mov byte ptr ss : [esp+0xD], 0x61
        mov byte ptr ss : [esp+0xE], 0x70
        mov edx, dword ptr ss : [esp+0xC]
        mov cl, 1
        mov byte ptr ss : [esp+0xC], 0x87
        mov byte ptr ss : [esp+0xD], 0xC3
        mov byte ptr ss : [esp+0xE], 0xE0
        mov byte ptr ss : [esp+0xF], 0x19
        mov byte ptr ds : [esi+0xE1], cl
        mov byte ptr ds : [esi+0xE0], cl
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xD8], edx
        mov byte ptr ss : [esp+0xE], al
        mov byte ptr ss : [esp+0xF], al
        mov byte ptr ss : [esp+0xC], 0xB9
        mov byte ptr ss : [esp+0xD], 0xF7
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xD4], ecx
        mov dword ptr ds : [esi+0xCC], edx
        mov dword ptr ds : [esi+0xB0], 0x3A902DE0
        mov eax, dword ptr ds : [edi+8]
        xor ebx, ebx
        cmp eax, ebx
        jne public_4bd994
        mov eax, dword ptr ds : [esi+0xF8]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4bd985
        mov word ptr ss : [esp+0x1C], bx
        public_4bd985 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x220]
        push ecx
        jmp public_4bd99d
        public_4bd994 : nop
        push eax
        lea edx, ss:[esp+0x220]
        push edx
        public_4bd99d : nop
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        lea eax, ss:[esp+0x21C]
/*FIXUP push offset public_5cef90 @0x4bd9ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef90
        push eax
        call dword ptr ds : [public_5c7200]
        add esp, 8
        test eax, eax
        jne public_4bd9da
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xFD
        pop edi
        mov byte ptr ds : [esi+0x159], bl
        mov byte ptr ds : [esi+0x6C], al
        pop esi
        pop ebx
        add esp, 0x1210
        ret 4
        public_4bd9da : nop
        mov eax, dword ptr ds : [edi+0x44]
        cmp eax, ebx
        je public_4bda43
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        call public_577dd0
        add esp, 8
        test al, al
        je public_4bda43
        cmp dword ptr ss : [esp+0x14], ebx
        je public_4bda43
        push 0x100
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_577f50
        mov ebx, dword ptr ds : [public_5c70ac]
        lea ecx, ss:[esp+0x228]
/*FIXUP push offset public_5d5ff4 @0x4bda1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5ff4
        push ecx
        call ebx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x234]
        push eax
        call ebx
        lea ecx, ss:[esp+0x238]
/*FIXUP push offset public_5d5ff0 @0x4bda38*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5ff0
        push ecx
        call ebx
        add esp, 0x24
        public_4bda43 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x21C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x70]
        push edi
        mov ecx, esi
        call public_4bda70
        pop edi
        pop esi
        pop ebx
        add esp, 0x1210
        ret 4
        UNREACHABLE_TRAP(0x4bd880)
    }
}

#undef public_4bd985
#undef public_4bd994
#undef public_4bd99d
#undef public_4bd9da
#undef public_4bda43
