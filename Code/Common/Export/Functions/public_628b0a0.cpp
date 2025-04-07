#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b0a0);
CLANG_FORWARD_PROC_SYMBOL(public_628c860);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6344210);
CLANG_FORWARD_PROC_SYMBOL(public_6345f10);
CLANG_FORWARD_PROC_SYMBOL(public_63486c0);
CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6348720);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393418);

#define public_628b110 _public_628b110
#define public_628b118 _public_628b118
#define public_628b144 _public_628b144
#define public_628b146 _public_628b146
#define public_628b1b8 _public_628b1b8
#define public_628b1c6 _public_628b1c6

PROC_DECLARE(0x628b0a0, internal_628b0a0, public_628b0a0);
extern "C" NAKED register_t __cdecl internal_628b0a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393418 @0x628b0a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393418
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x78
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x30]
        call public_63486c0
        mov esi, dword ptr ss : [esp+0x98]
        lea eax, ds:[esi+6]
        xor ebx, ebx
        push eax
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x94], ebx
        call public_6348720
        movzx ecx, byte ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x3C], ecx
        push esi
        mov ecx, offset public_63fc098
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fc09c]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_628b110
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_628b110
        lea eax, ss:[esp+0x10]
        jmp public_628b118
        public_628b110 : nop
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x14]
        public_628b118 : nop
        mov ebp, dword ptr ds : [eax]
        push 0x1C
        call public_6391d9c
        add esp, 4
        cmp eax, ebx
        je public_628b144
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x18], ebx
        mov dword ptr ds : [eax], offset public_639c30c
        mov edi, eax
        jmp public_628b146
        public_628b144 : nop
        xor edi, edi
        public_628b146 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x9C]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov dword ptr ds : [edi+0x18], eax
        push edx
        lea eax, ds:[esi+0x1C]
        push eax
        lea ecx, ds:[esi+0x10]
        push ecx
        lea ecx, ss:[ebp+0x10]
        call public_628c860
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [edi+4], eax
        call public_6344210
        movzx edx, byte ptr ds : [esi+5]
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x2C], edx
        mov ecx, dword ptr ds : [edi+4]
        push eax
        call public_6345f10
        mov esi, dword ptr ds : [esi+0x40]
        cmp esi, ebx
        je public_628b1c6
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x10], esi
        mov eax, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [eax+0x28]
        mov dx, word ptr ds : [eax+0x12]
        cmp dx, word ptr ds : [eax+0x10]
        lea esi, ds:[eax+0x10]
        jb public_628b1b8
        mov ecx, esi
        call public_63441a0
        public_628b1b8 : nop
        movzx eax, word ptr ds : [esi+2]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+eax*4], edi
        inc word ptr ds : [esi+2]
        public_628b1c6 : nop
        mov edx, dword ptr ss : [esp+0xA0]
        lea ecx, ss:[esp+0x30]
        mov dword ptr ds : [edx], edi
        mov dword ptr ss : [esp+0x90], 0xFFFFFFFF
        call public_6348710
        mov ecx, dword ptr ss : [esp+0x88]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x84
        ret 
        UNREACHABLE_TRAP(0x628b0a0)
    }
}

#undef public_628b110
#undef public_628b118
#undef public_628b144
#undef public_628b146
#undef public_628b1b8
#undef public_628b1c6
