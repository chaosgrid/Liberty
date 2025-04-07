#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b200);
CLANG_FORWARD_PROC_SYMBOL(public_62fd030);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6344210);
CLANG_FORWARD_PROC_SYMBOL(public_6345f10);
CLANG_FORWARD_PROC_SYMBOL(public_63486c0);
CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6348720);
CLANG_FORWARD_PROC_SYMBOL(public_634cd80);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393418);

#define public_628b24b _public_628b24b
#define public_628b24d _public_628b24d
#define public_628b2b9 _public_628b2b9
#define public_628b2c1 _public_628b2c1
#define public_628b2e5 _public_628b2e5
#define public_628b2e7 _public_628b2e7
#define public_628b312 _public_628b312
#define public_628b350 _public_628b350
#define public_628b3bc _public_628b3bc
#define public_628b3ca _public_628b3ca
#define public_628b3f0 _public_628b3f0
#define public_628b422 _public_628b422

PROC_DECLARE(0x628b200, internal_628b200, public_628b200);
extern "C" NAKED register_t __cdecl internal_628b200()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6393418 @0x628b208*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393418
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA8
        push ebx
        push ebp
        push esi
        push edi
        push 0x1C
        call public_6391d9c
        xor ebp, ebp
        add esp, 4
        cmp eax, ebp
        je public_628b24b
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax+0xC], ebp
        mov dword ptr ds : [eax+0x10], ebp
        mov dword ptr ds : [eax+0x14], ebp
        mov dword ptr ds : [eax+0x18], ebp
        mov dword ptr ds : [eax], offset public_639c30c
        mov edi, eax
        jmp public_628b24d
        public_628b24b : nop
        xor edi, edi
        public_628b24d : nop
        mov esi, dword ptr ss : [esp+0xC8]
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [esp+0xCC]
        mov dword ptr ds : [edi+0x18], eax
        cmp dword ptr ds : [ebx+4], ebp
        je public_628b3f0
        lea ecx, ss:[esp+0x60]
        call public_63486c0
        lea ecx, ds:[esi+6]
        push ecx
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0xC4], ebp
        call public_6348720
        movzx edx, byte ptr ds : [esi+4]
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_63fc098
        mov dword ptr ss : [esp+0x74], edx
        call public_62fd030
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_63fc09c]
        cmp eax, ecx
        je public_628b2b9
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_628b2b9
        lea eax, ss:[esp+0x14]
        jmp public_628b2c1
        public_628b2b9 : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_628b2c1 : nop
        mov eax, dword ptr ds : [eax]
        push 8
        mov dword ptr ss : [esp+0x14], eax
        call public_6391d9c
        add esp, 4
        cmp eax, ebp
        je public_628b2e5
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax], offset public_639c2dc
        mov dword ptr ds : [eax+4], ecx
        mov ebx, eax
        jmp public_628b2e7
        public_628b2e5 : nop
        xor ebx, ebx
        public_628b2e7 : nop
        mov dword ptr ds : [edi+0xC], ebx
        fld dword ptr ds : [esi+0x18]
        fld dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [public_63fc0b8]
        cmp eax, ebp
        fstp dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x38], ecx
        jne public_628b312
        call public_6391cf0
        mov dword ptr ds : [public_63fc0b8], eax
        public_628b312 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x1C]
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x1C], eax
        cmp dword ptr ss : [esp+0x78], ebp
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        jne public_628b350
        mov eax, dword ptr ds : [public_63fc0bc]
        mov dword ptr ss : [esp+0x78], eax
        public_628b350 : nop
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+0x28]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        push ebx
        call public_634cd80
        lea ecx, ss:[esp+0x48]
        mov dword ptr ds : [edi+4], eax
        call public_6344210
        movzx edx, byte ptr ds : [esi+5]
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x48]
        push eax
        mov dword ptr ss : [esp+0x4C], 1
        mov dword ptr ss : [esp+0x60], edx
        call public_6345f10
        mov esi, dword ptr ds : [esi+0x40]
        cmp esi, ebp
        je public_628b3ca
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x10], esi
        mov eax, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [eax+0x28]
        mov dx, word ptr ds : [eax+0x12]
        cmp dx, word ptr ds : [eax+0x10]
        lea esi, ds:[eax+0x10]
        jb public_628b3bc
        mov ecx, esi
        call public_63441a0
        public_628b3bc : nop
        movzx eax, word ptr ds : [esi+2]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+eax*4], edi
        inc word ptr ds : [esi+2]
        public_628b3ca : nop
        mov edx, dword ptr ss : [esp+0xD0]
        lea ecx, ss:[esp+0x60]
        mov dword ptr ds : [edx], edi
        mov dword ptr ss : [esp+0xC0], 0xFFFFFFFF
        call public_6348710
        xor eax, eax
        jmp public_628b422
        nop 
        lea esp, ss:[esp]
/*FIXUP public_628b3f0 : nop
        push offset public_639c318 @0x628b3f0*/
  FIXUP public_628b3f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c318
        push 0x5D0
/*FIXUP push offset public_639c19c @0x628b3fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c19c
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x628b404*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0xE4]
        add esp, 0x14
        mov dword ptr ds : [ecx], ebp
        mov eax, 1
        public_628b422 : nop
        mov ecx, dword ptr ss : [esp+0xB8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xB4
        ret 
        UNREACHABLE_TRAP(0x628b200)
    }
}

#undef public_628b24b
#undef public_628b24d
#undef public_628b2b9
#undef public_628b2c1
#undef public_628b2e5
#undef public_628b2e7
#undef public_628b312
#undef public_628b350
#undef public_628b3bc
#undef public_628b3ca
#undef public_628b3f0
#undef public_628b422
