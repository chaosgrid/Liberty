#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6266790);
CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_626a620);
CLANG_FORWARD_PROC_SYMBOL(public_6273370);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_630cb40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62617b2 _public_62617b2
#define public_62617d0 _public_62617d0
#define public_6261a1a _public_6261a1a
#define public_6261a8b _public_6261a8b
#define public_6261ab9 _public_6261ab9
#define public_6261adb _public_6261adb
#define public_6261ade _public_6261ade
#define public_6261b4a _public_6261b4a
#define public_6261bbb _public_6261bbb
#define public_6261be9 _public_6261be9
#define public_6261c0b _public_6261c0b
#define public_6261c0e _public_6261c0e
#define public_6261c2f _public_6261c2f
#define public_6261c3b _public_6261c3b
#define public_6261c7a _public_6261c7a
#define public_6261ced _public_6261ced
#define public_6261d1b _public_6261d1b
#define public_6261d3d _public_6261d3d
#define public_6261d40 _public_6261d40

PROC_DECLARE(0x6261780, internal_6261780, public_6261780);
extern "C" NAKED register_t __cdecl internal_6261780()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov dl, byte ptr ds : [edi+8]
        mov byte ptr ds : [esi+8], dl
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        mov ecx, edi
        lea eax, ds:[esi+0x14]
        sub ecx, esi
        mov edx, 0x20
        public_62617b2 : nop
        mov ebx, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], ebx
        add eax, 4
        dec edx
        jne public_62617b2
        mov ebp, 0xFFFFFF6C
        lea eax, ds:[esi+0x94]
        sub ebp, esi
        lea ebx, ds:[ebx]
        public_62617d0 : nop
        mov dl, byte ptr ds : [eax+ecx]
        mov byte ptr ds : [eax], dl
        inc eax
        lea edx, ds:[eax+ebp]
        cmp edx, 0x20
        jb public_62617d0
        mov eax, dword ptr ds : [edi+0xB4]
        mov dword ptr ds : [esi+0xB4], eax
        mov ecx, dword ptr ds : [edi+0xB8]
        mov dword ptr ds : [esi+0xB8], ecx
        mov edx, dword ptr ds : [edi+0xBC]
        mov dword ptr ds : [esi+0xBC], edx
        mov al, byte ptr ds : [edi+0xC0]
        mov byte ptr ds : [esi+0xC0], al
        mov ecx, dword ptr ds : [edi+0xC4]
        mov dword ptr ds : [esi+0xC4], ecx
        mov edx, dword ptr ds : [edi+0xC8]
        mov dword ptr ds : [esi+0xC8], edx
        mov eax, dword ptr ds : [edi+0xCC]
        mov dword ptr ds : [esi+0xCC], eax
        mov ecx, dword ptr ds : [edi+0xD0]
        mov dword ptr ds : [esi+0xD0], ecx
        mov dl, byte ptr ds : [edi+0xD4]
        mov byte ptr ds : [esi+0xD4], dl
        mov al, byte ptr ds : [edi+0xD5]
        mov byte ptr ds : [esi+0xD5], al
        lea ecx, ds:[edi+0xD8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0xD8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov dl, byte ptr ds : [edi+0xE4]
        mov byte ptr ds : [esi+0xE4], dl
        mov al, byte ptr ds : [edi+0xE5]
        mov byte ptr ds : [esi+0xE5], al
        lea ecx, ds:[edi+0xE8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0xE8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edx, ds:[edi+0xF4]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[esi+0xF4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea eax, ds:[edi+0x100]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x100]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ds : [edi+0x10C]
        mov byte ptr ds : [esi+0x10C], cl
        mov dl, byte ptr ds : [edi+0x10D]
        mov byte ptr ds : [esi+0x10D], dl
        lea eax, ds:[edi+0x110]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x110]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ds:[edi+0x11C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0x11C]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edx, ds:[edi+0x128]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[esi+0x128]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea eax, ds:[edi+0x134]
        push eax
        lea ecx, ds:[esi+0x134]
        call public_6266790
        lea ecx, ds:[edi+0x144]
        push ecx
        lea ecx, ds:[esi+0x144]
        call public_6266790
        lea edx, ds:[edi+0x154]
        push edx
        lea ecx, ds:[esi+0x154]
        call public_6266790
        lea eax, ds:[edi+0x164]
        push eax
        lea ecx, ds:[esi+0x164]
        call public_6266790
        lea ecx, ds:[edi+0x174]
        push ecx
        lea ecx, ds:[esi+0x174]
        call public_6266790
        lea edx, ds:[edi+0x184]
        push edx
        lea ecx, ds:[esi+0x184]
        call public_6266790
        lea ecx, ds:[edi+0x194]
        lea ebx, ds:[esi+0x194]
        cmp ebx, ecx
        je public_6261ade
        call public_626a600
        mov ecx, ebx
        mov ebp, eax
        call public_626a600
        cmp ebp, eax
        ja public_6261a1a
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edi+0x19C]
        mov ecx, dword ptr ds : [edi+0x198]
        lea ebp, ds:[edi+0x194]
        push edx
        push eax
        push ecx
        call public_630cb40
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, ebx
        call public_628f050
        mov ecx, ebp
        call public_626a600
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6261adb
        public_6261a1a : nop
        lea ecx, ds:[edi+0x194]
        call public_626a600
        mov ecx, ebx
        mov ebp, eax
        call public_626a620
        cmp ebp, eax
        ja public_6261a8b
        mov ecx, dword ptr ds : [edi+0x198]
        lea ebp, ds:[edi+0x194]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, ebx
        call public_626a600
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ds:[edx+eax*4]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push eax
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_630cb40
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_627f7b0
        mov ecx, ebp
        call public_626a600
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [ebx+8], edx
        jmp public_6261ade
        public_6261a8b : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        mov ecx, ebx
        call public_628f050
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6391d5a
        lea ebp, ds:[edi+0x194]
        add esp, 4
        mov ecx, ebp
        call public_626a600
        test eax, eax
        jge public_6261ab9
        xor eax, eax
        public_6261ab9 : nop
        shl eax, 2
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_627f7b0
        mov dword ptr ds : [ebx+0xC], eax
        public_6261adb : nop
        mov dword ptr ds : [ebx+8], eax
        public_6261ade : nop
        lea ebp, ds:[edi+0x1A4]
        lea ebx, ds:[esi+0x1A4]
        cmp ebx, ebp
        je public_6261c0e
        mov ecx, ebx
        call public_626a600
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], eax
        call public_626a600
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        ja public_6261b4a
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edi+0x1AC]
        mov ecx, dword ptr ds : [edi+0x1A8]
        lea ebp, ds:[edi+0x1A4]
        push edx
        push eax
        push ecx
        call public_630cb40
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, ebx
        call public_628f050
        mov ecx, ebp
        call public_626a600
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6261c0b
        public_6261b4a : nop
        mov ecx, ebx
        call public_626a620
        lea ecx, ds:[edi+0x1A4]
        mov ebp, eax
        call public_626a600
        cmp eax, ebp
        ja public_6261bbb
        mov ecx, dword ptr ds : [edi+0x1A8]
        lea ebp, ds:[edi+0x1A4]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, ebx
        call public_626a600
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ds:[edx+eax*4]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push eax
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_630cb40
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_627f7b0
        mov ecx, ebp
        call public_626a600
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [ebx+8], edx
        jmp public_6261c0e
        public_6261bbb : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        mov ecx, ebx
        call public_628f050
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6391d5a
        lea ebp, ds:[edi+0x1A4]
        add esp, 4
        mov ecx, ebp
        call public_626a600
        test eax, eax
        jge public_6261be9
        xor eax, eax
        public_6261be9 : nop
        shl eax, 2
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_627f7b0
        mov dword ptr ds : [ebx+0xC], eax
        public_6261c0b : nop
        mov dword ptr ds : [ebx+8], eax
        public_6261c0e : nop
        lea ebp, ds:[edi+0x1B4]
        lea ebx, ds:[esi+0x1B4]
        cmp ebx, ebp
        je public_6261d40
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6261c2f
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_6261c3b
        public_6261c2f : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x14], eax
        public_6261c3b : nop
        mov ecx, ebx
        call public_626a600
        cmp dword ptr ss : [esp+0x14], eax
        ja public_6261c7a
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        push edx
        push eax
        push ecx
        call public_630cb40
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, ebx
        call public_628f050
        mov ecx, ebp
        call public_626a600
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6261d3d
        public_6261c7a : nop
        mov ecx, ebx
        call public_626a620
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], eax
        call public_626a600
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        ja public_6261ced
        mov ecx, dword ptr ds : [edi+0x1B8]
        lea ebp, ds:[edi+0x1B4]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, ebx
        call public_626a600
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ds:[edx+eax*4]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push eax
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_630cb40
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_627f7b0
        mov ecx, ebp
        call public_626a600
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [ebx+8], edx
        jmp public_6261d40
        public_6261ced : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        mov ecx, ebx
        call public_628f050
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6391d5a
        lea ebp, ds:[edi+0x1B4]
        add esp, 4
        mov ecx, ebp
        call public_626a600
        test eax, eax
        jge public_6261d1b
        xor eax, eax
        public_6261d1b : nop
        shl eax, 2
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_627f7b0
        mov dword ptr ds : [ebx+0xC], eax
        public_6261d3d : nop
        mov dword ptr ds : [ebx+8], eax
        public_6261d40 : nop
        mov ecx, dword ptr ds : [edi+0x1C4]
        mov dword ptr ds : [esi+0x1C4], ecx
        add edi, 0x1C8
        push edi
        lea ecx, ds:[esi+0x1C8]
        call public_6273370
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6261780)
    }
}

#undef public_62617b2
#undef public_62617d0
#undef public_6261a1a
#undef public_6261a8b
#undef public_6261ab9
#undef public_6261adb
#undef public_6261ade
#undef public_6261b4a
#undef public_6261bbb
#undef public_6261be9
#undef public_6261c0b
#undef public_6261c0e
#undef public_6261c2f
#undef public_6261c3b
#undef public_6261c7a
#undef public_6261ced
#undef public_6261d1b
#undef public_6261d3d
#undef public_6261d40
