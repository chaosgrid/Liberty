#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_49c740);
CLANG_FORWARD_PROC_SYMBOL(public_49dcc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bca5b);

#define public_49dcfd _public_49dcfd
#define public_49dd94 _public_49dd94
#define public_49de37 _public_49de37
#define public_49de60 _public_49de60
#define public_49de90 _public_49de90
#define public_49df11 _public_49df11
#define public_49df34 _public_49df34
#define public_49df63 _public_49df63
#define public_49e015 _public_49e015
#define public_49e038 _public_49e038
#define public_49e089 _public_49e089
#define public_49e0ab _public_49e0ab
#define public_49e0c7 _public_49e0c7
#define public_49e100 _public_49e100
#define public_49e130 _public_49e130
#define public_49e16a _public_49e16a

PROC_DECLARE(0x49dcc0, internal_49dcc0, public_49dcc0);
extern "C" NAKED register_t __cdecl internal_49dcc0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bca5b @0x49dcc8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bca5b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_6720a0]
        mov dword ptr fs : [0], esp
        sub esp, 0x120
        cmp eax, 1
        push ebp
        push esi
        push edi
        mov ebp, ecx
        je public_49dcfd
        cmp eax, 2
        je public_49dcfd
        cmp eax, 3
        je public_49dcfd
        cmp eax, 5
        jne public_49e16a
        public_49dcfd : nop
        mov ecx, ebp
        call public_49c740
        mov byte ptr ss : [esp+0xF], al
        mov eax, dword ptr ss : [ebp+0xEE8]
        test eax, eax
        je public_49e16a
        lea eax, ss:[ebp+0x3D4]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x38]
        rep movsd
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x5C], ecx
        mov dword ptr ss : [esp+0x24], 0xBF0CCCCC
        mov ecx, dword ptr ss : [esp+0x24]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, 9
        lea edi, ss:[esp+0x108]
        mov dword ptr ss : [esp+0x60], edx
        rep movsd
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        jne public_49dd94
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49dd94 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, 9
        lea esi, ss:[esp+0x108]
        lea edi, ss:[esp+0x68]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x8C], edx
        lea edx, ss:[esp+0x68]
        push edx
        push 0
        mov dword ptr ss : [esp+0x98], eax
        mov dword ptr ss : [esp+0x9C], ecx
        call public_422690
        push 0xB50
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        add esp, 0x24
        mov esi, offset public_5d2e34
        mov eax, 0x8D
        public_49de37 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_49de37
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5d2e94
        mov eax, 1
        public_49de60 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_49de60
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5d2e94
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_49de90 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_49de90
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        push 0x89
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0x89
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        mov dword ptr ss : [esp+0x134], 0
        jne public_49df11
        mov edx, dword ptr ds : [public_6720bc]
        mov eax, dword ptr ds : [public_6720ac]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        je public_49e038
        public_49df11 : nop
        mov eax, dword ptr ds : [public_6720bc]
        test eax, eax
        je public_49df34
        mov eax, dword ptr ds : [public_6720ac]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6720bc @0x49df21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6720bc
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [public_6720bc], 0
        public_49df34 : nop
        mov ecx, dword ptr ss : [ebp+0xEE8]
        mov eax, dword ptr ds : [public_6720ac]
        mov edx, dword ptr ds : [eax]
        push 0
/*FIXUP push offset public_6720bc @0x49df43*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6720bc
        push ecx
        push 0x42
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        je public_49df63
        mov dword ptr ss : [esp+0x134], 0xFFFFFFFF
        jmp public_49e0ab
        public_49df63 : nop
        xor eax, eax
        mov ecx, 0x1C
        lea edi, ss:[esp+0x98]
        rep stosd
        mov eax, 0x10
        mov dword ptr ss : [esp+0xA4], eax
        mov dword ptr ss : [esp+0xCC], eax
        mov eax, dword ptr ss : [ebp+0xEE0]
        mov dword ptr ss : [esp+0x9C], eax
        add eax, 0xC
        mov dword ptr ss : [esp+0xC4], eax
        mov eax, dword ptr ss : [ebp+0xEE8]
        push eax
        push 0
        mov dword ptr ss : [esp+0x10C], eax
        lea eax, ss:[esp+0xA0]
        push eax
        lea ecx, ss:[ebp+0xF14]
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ds : [public_6720ac]
        push ecx
        mov ecx, dword ptr ds : [public_6720bc]
        push ecx
        mov dword ptr ss : [esp+0xAC], 2
        mov dword ptr ss : [esp+0xB4], 0xC
        mov dword ptr ss : [esp+0xDC], 4
        mov dword ptr ss : [esp+0x114], 0x42
        mov esi, dword ptr ds : [edx]
        push edx
        call dword ptr ds : [esi+0x18]
        test eax, eax
        je public_49e015
        mov dword ptr ss : [esp+0x134], 0xFFFFFFFF
        jmp public_49e0ab
        public_49e015 : nop
        mov ecx, dword ptr ds : [public_6720bc]
        mov eax, dword ptr ds : [public_6720ac]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        test eax, eax
        je public_49e038
        mov dword ptr ss : [esp+0x134], 0xFFFFFFFF
        jmp public_49e0ab
        public_49e038 : nop
        mov ecx, dword ptr ss : [ebp+0xEEC]
        mov eax, dword ptr ds : [public_6720b0]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xEE4]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        or esi, 0xFFFFFFFF
        push esi
        mov dword ptr ss : [esp+0x38], 0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        test eax, eax
        je public_49e089
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x140], esi
        call dword ptr ds : [edx+0xF0]
        jmp public_49e16a
        public_49e089 : nop
        mov ecx, dword ptr ss : [ebp+0xF14]
        mov eax, dword ptr ds : [public_6720b0]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x24]
        test eax, eax
        je public_49e0c7
        mov dword ptr ss : [esp+0x134], esi
        public_49e0ab : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        jmp public_49e16a
        public_49e0c7 : nop
        mov ecx, dword ptr ss : [ebp+0xEEC]
        mov eax, dword ptr ds : [public_6720b4]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xEE8]
        push ecx
        push 0
        push 4
        push eax
        call dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5d2e4c
        mov eax, 0x8D
        nop 
        lea esp, ss:[esp]
        public_49e100 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_49e100
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5d2e4c
        mov eax, 0x8D
        lea esp, ss:[esp]
        public_49e130 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_49e130
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        mov dword ptr ss : [esp+0x140], 0xFFFFFFFF
        call dword ptr ds : [ecx+0xF0]
        public_49e16a : nop
        mov ecx, dword ptr ss : [esp+0x12C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x12C
        ret 
        UNREACHABLE_TRAP(0x49dcc0)
    }
}

#undef public_49dcfd
#undef public_49dd94
#undef public_49de37
#undef public_49de60
#undef public_49de90
#undef public_49df11
#undef public_49df34
#undef public_49df63
#undef public_49e015
#undef public_49e038
#undef public_49e089
#undef public_49e0ab
#undef public_49e0c7
#undef public_49e100
#undef public_49e130
#undef public_49e16a
