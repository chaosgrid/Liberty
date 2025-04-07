#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71730);
CLANG_FORWARD_PROC_SYMBOL(public_6b71980);
CLANG_FORWARD_PROC_SYMBOL(public_6b73f60);

#define public_6b71805 _public_6b71805
#define public_6b71817 _public_6b71817
#define public_6b7183f _public_6b7183f
#define public_6b71852 _public_6b71852
#define public_6b7185a _public_6b7185a
#define public_6b7185e _public_6b7185e
#define public_6b71864 _public_6b71864
#define public_6b7187b _public_6b7187b
#define public_6b7187c _public_6b7187c
#define public_6b71881 _public_6b71881
#define public_6b718d6 _public_6b718d6
#define public_6b718da _public_6b718da
#define public_6b718e4 _public_6b718e4
#define public_6b718e8 _public_6b718e8
#define public_6b718ea _public_6b718ea
#define public_6b718ec _public_6b718ec
#define public_6b71905 _public_6b71905
#define public_6b71910 _public_6b71910
#define public_6b7194b _public_6b7194b
#define public_6b71965 _public_6b71965

PROC_DECLARE(0x6b717e0, internal_6b717e0, public_6b717e0);
extern "C" NAKED register_t __cdecl internal_6b717e0()
{
    __asm
    {
        sub esp, 0x114
        mov eax, dword ptr ss : [esp+0x120]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], edi
        je public_6b7183f
        dec eax
        lea edx, ds:[edi+0x20]
        cmp eax, 4
        jb public_6b71817
        public_6b71805 : nop
        mov edx, dword ptr ds : [edx]
        test edx, edx
        je public_6b71965
        sub eax, 4
        cmp eax, 4
        jae public_6b71805
        public_6b71817 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 3
        sub ecx, eax
        lea eax, ds:[ecx+ecx*2]
        lea eax, ds:[edx+eax*4+4]
        test eax, eax
        je public_6b71965
        cmp dword ptr ds : [eax], 0
        je public_6b71965
        mov edx, dword ptr ds : [eax+4]
        jmp public_6b718ec
        public_6b7183f : nop
        mov eax, dword ptr ss : [esp+0x12C]
        test eax, eax
        jne public_6b71852
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+4]
        jmp public_6b7185a
        public_6b71852 : nop
        cmp eax, 0xFFFFFFFF
        je public_6b7185e
        mov eax, dword ptr ds : [eax+4]
        public_6b7185a : nop
        test eax, eax
        jne public_6b71864
        public_6b7185e : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edx+4]
        public_6b71864 : nop
        mov ebp, eax
        test ebp, ebp
        je public_6b718e8
        mov esi, dword ptr ss : [esp+0x128]
        mov al, byte ptr ds : [esi]
        cmp al, 0x5C
        je public_6b7187b
        cmp al, 0x2F
        jne public_6b7187c
        public_6b7187b : nop
        inc esi
        public_6b7187c : nop
        cmp byte ptr ds : [esi], 0
        je public_6b718e8
        public_6b71881 : nop
        test byte ptr ss : [ebp+8], 0x10
        je public_6b718d6
        push esi
        call public_6b71980
        add esp, 4
        mov ebx, eax
        test ebx, ebx
        push ebp
        je public_6b718da
        sub eax, esi
        lea edi, ss:[esp+0x24]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+eax+0x24], 0
        lea eax, ss:[esp+0x24]
        push eax
        call public_6b71730
        mov ebp, eax
        test ebp, ebp
        je public_6b718e4
        mov al, byte ptr ds : [ebx+1]
        lea esi, ds:[ebx+1]
        test al, al
        je public_6b718e4
        mov edi, dword ptr ss : [esp+0x10]
        jmp public_6b71881
        public_6b718d6 : nop
        xor eax, eax
        jmp public_6b718ea
        public_6b718da : nop
        push esi
        mov ecx, edi
        call public_6b71730
        jmp public_6b718ea
        public_6b718e4 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_6b718e8 : nop
        mov eax, ebp
        public_6b718ea : nop
        mov edx, eax
        public_6b718ec : nop
        xor ebx, ebx
        cmp edx, ebx
        je public_6b71965
        lea esi, ds:[edi+0x10]
        mov edi, dword ptr ds : [edi+0x1C]
        cmp edi, ebx
        je public_6b71910
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6b71910
        public_6b71905 : nop
        cmp dword ptr ds : [eax+0xC], ebx
        je public_6b7194b
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6b71905
        public_6b71910 : nop
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        push ecx
        lea edx, ss:[esp+0x14]
        push eax
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], offset public_6b791e4
        mov dword ptr ss : [esp+0x28], ebx
        call public_6b73f60
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [eax+4]
        pop ebx
        add eax, 8
        add esp, 0x114
        ret 0xC
        public_6b7194b : nop
        dec edi
        add eax, 8
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], ebx
        pop ebp
        mov dword ptr ds : [eax+4], edx
        pop ebx
        add esp, 0x114
        ret 0xC
        public_6b71965 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x114
        ret 0xC
        UNREACHABLE_TRAP(0x6b717e0)
    }
}

#undef public_6b71805
#undef public_6b71817
#undef public_6b7183f
#undef public_6b71852
#undef public_6b7185a
#undef public_6b7185e
#undef public_6b71864
#undef public_6b7187b
#undef public_6b7187c
#undef public_6b71881
#undef public_6b718d6
#undef public_6b718da
#undef public_6b718e4
#undef public_6b718e8
#undef public_6b718ea
#undef public_6b718ec
#undef public_6b71905
#undef public_6b71910
#undef public_6b7194b
#undef public_6b71965
