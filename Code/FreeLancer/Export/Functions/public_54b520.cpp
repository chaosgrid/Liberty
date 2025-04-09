#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4252d0);
CLANG_FORWARD_PROC_SYMBOL(public_425480);
CLANG_FORWARD_PROC_SYMBOL(public_4c3de0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_4c3f00);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_4c4650);
CLANG_FORWARD_PROC_SYMBOL(public_4c4670);
CLANG_FORWARD_PROC_SYMBOL(public_4c4f70);
CLANG_FORWARD_PROC_SYMBOL(public_4cdc10);
CLANG_FORWARD_PROC_SYMBOL(public_52e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_543380);
CLANG_FORWARD_PROC_SYMBOL(public_54b520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1304);

#define public_54b566 _public_54b566
#define public_54b568 _public_54b568
#define public_54b5c2 _public_54b5c2
#define public_54b5c6 _public_54b5c6
#define public_54b6b4 _public_54b6b4
#define public_54b6c8 _public_54b6c8
#define public_54b745 _public_54b745
#define public_54b75d _public_54b75d
#define public_54b783 _public_54b783
#define public_54b82f _public_54b82f
#define public_54b856 _public_54b856

PROC_DECLARE(0x54b520, internal_54b520, public_54b520);
extern "C" NAKED register_t __cdecl internal_54b520()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1304 @0x54b522*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1304
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x118
        push ebp
        push edi
        push 0x190
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x128], ebp
        je public_54b566
        mov ecx, eax
        call public_543380
        mov edi, eax
        jmp public_54b568
        public_54b566 : nop
        xor edi, edi
        public_54b568 : nop
        push ebx
        or ebx, 0xFFFFFFFF
        push esi
        mov dword ptr ss : [esp+0x130], ebx
        call public_4c3e10
        push eax
        call dword ptr ds : [public_5c61fc]
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [edi]
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x168]
        mov ecx, esi
        call dword ptr ds : [public_5c65c8]
        lea eax, ds:[edi+0xC]
        cmp eax, ebp
        je public_54b5c2
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebp
        je public_54b5c2
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        mov dword ptr ss : [esp+0x14], eax
        je public_54b5c6
        public_54b5c2 : nop
        mov dword ptr ss : [esp+0x14], ebp
        public_54b5c6 : nop
        lea ecx, ss:[esp+0x20]
        call public_52e0a0
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x7C], ebp
        mov dword ptr ss : [esp+0x80], ebx
        call public_4cdc10
        lea ecx, ss:[esp+0xBC]
        mov dword ptr ss : [esp+0xB8], ebp
        call dword ptr ds : [public_5c6a38]
        lea edx, ss:[esp+0x1B]
        push edx
        lea ecx, ss:[esp+0xD0]
        mov dword ptr ss : [esp+0x134], 1
        call dword ptr ds : [public_5c6a34]
        mov dword ptr ss : [esp+0x108], ebp
        mov dword ptr ss : [esp+0x10C], ebp
        mov dword ptr ss : [esp+0x110], ebp
        mov byte ptr ss : [esp+0x114], 0
        mov eax, dword ptr ds : [public_673378]
        mov ecx, dword ptr ds : [public_613ed0]
        mov edx, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0x130], 2
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        call public_4c4670
        mov dword ptr ss : [esp+0x80], eax
        call public_4c3de0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x84], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x88], edx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x8C], ecx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x90], edx
        mov ecx, dword ptr ds : [eax+0x30]
        xor edx, edx
        cmp ecx, ebp
        mov dword ptr ss : [esp+0xB4], ecx
        jle public_54b6c8
        lea ebx, ss:[esp+0x84]
        lea ecx, ss:[esp+0x94]
        sub eax, ebx
        public_54b6b4 : nop
        mov ebx, dword ptr ds : [eax+ecx]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ss : [esp+0xB4]
        inc edx
        add ecx, 4
        cmp edx, ebx
        jl public_54b6b4
        public_54b6c8 : nop
        call public_4c4650
        mov dword ptr ss : [esp+0xB8], eax
        call public_4c4f70
        fmul dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x2C]
        call public_4c4060
        push eax
        lea ecx, ss:[esp+0x11C]
        call dword ptr ds : [public_5c6b54]
        push eax
        lea ecx, ss:[esp+0xC0]
        mov byte ptr ss : [esp+0x134], 3
        call dword ptr ds : [public_5c6a24]
        mov eax, dword ptr ss : [esp+0x11C]
        push eax
        mov byte ptr ss : [esp+0x134], 2
        call public_5b7e1d
        add esp, 4
        call public_4c3f00
        lea ecx, ss:[esp+0xCC]
        cmp ecx, eax
        je public_54b783
        mov edx, dword ptr ss : [esp+0xD0]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        mov ebx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ebx]
        mov ebp, edx
        je public_54b75d
        public_54b745 : nop
        cmp esi, ebx
        je public_54b75d
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, ebp
        mov esi, dword ptr ds : [esi]
        jne public_54b745
        public_54b75d : nop
        push ebp
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0xD8]
        call dword ptr ds : [public_5c65c0]
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0xD8]
        call dword ptr ds : [public_5c63b0]
        xor ebp, ebp
        public_54b783 : nop
        call public_4c4670
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_5c6b50]
        mov ecx, dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0xE0]
/*FIXUP push offset public_6732f0 @0x54b7a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6732f0
        push edx
        mov dword ptr ss : [esp+0x120], ecx
        call dword ptr ds : [public_5c70b4]
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x10C]
        mov ecx, esi
        call dword ptr ds : [public_5c6590]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        lea eax, ss:[esp+0xBC]
        push 1
        push eax
        call public_4252d0
        mov edx, dword ptr ds : [edi]
        add esp, 8
        mov ecx, edi
        call dword ptr ds : [edx+0x1C]
        push eax
        call public_425480
        mov eax, dword ptr ds : [edi]
        add esp, 4
        mov ecx, edi
        call dword ptr ds : [eax+0x170]
        push 1
        push edi
        call public_540c30
        add esp, 8
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_54b82f
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c65c4]
        public_54b82f : nop
        mov ecx, dword ptr ds : [public_673378]
        mov dword ptr ds : [public_679774], ecx
        mov ecx, dword ptr ds : [public_679744]
        lea eax, ds:[edi+8]
        cmp eax, ecx
        pop esi
        pop ebx
        je public_54b856
        push eax
        mov ecx, offset public_679744
        call dword ptr ds : [public_5c62a8]
        public_54b856 : nop
        mov eax, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        mov eax, dword ptr ds : [public_673378]
        mov byte ptr ds : [public_678b96], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xC0]
        lea ecx, ss:[esp+8]
        push ecx
        lea ecx, ss:[esp+0xC8]
        mov dword ptr ss : [esp+0x12C], 4
        call dword ptr ds : [public_5c63b4]
        mov edx, dword ptr ss : [esp+0xC8]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0xD0]
        call dword ptr ds : [public_5c65c0]
        mov edx, dword ptr ss : [esp+0xC8]
        push edx
        call public_5b7e1d
        add esp, 4
        lea ecx, ss:[esp+0xB4]
        mov dword ptr ss : [esp+0xC8], ebp
        mov dword ptr ss : [esp+0xCC], ebp
        mov dword ptr ss : [esp+0x128], 0xFFFFFFFF
        call dword ptr ds : [public_5c6a2c]
        mov ecx, dword ptr ss : [esp+0x120]
        mov eax, edi
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x124
        ret 
        UNREACHABLE_TRAP(0x54b520)
    }
}

#undef public_54b566
#undef public_54b568
#undef public_54b5c2
#undef public_54b5c6
#undef public_54b6b4
#undef public_54b6c8
#undef public_54b745
#undef public_54b75d
#undef public_54b783
#undef public_54b82f
#undef public_54b856
