#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_4df080);
CLANG_FORWARD_PROC_SYMBOL(public_4df8d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4df0d2 _public_4df0d2
#define public_4df0d4 _public_4df0d4
#define public_4df0dc _public_4df0dc
#define public_4df0ef _public_4df0ef
#define public_4df0fc _public_4df0fc
#define public_4df120 _public_4df120
#define public_4df138 _public_4df138
#define public_4df142 _public_4df142
#define public_4df162 _public_4df162
#define public_4df17a _public_4df17a
#define public_4df180 _public_4df180
#define public_4df193 _public_4df193
#define public_4df1a0 _public_4df1a0
#define public_4df1ae _public_4df1ae
#define public_4df1ec _public_4df1ec
#define public_4df21a _public_4df21a
#define public_4df255 _public_4df255
#define public_4df260 _public_4df260
#define public_4df277 _public_4df277
#define public_4df297 _public_4df297
#define public_4df2a7 _public_4df2a7
#define public_4df2b4 _public_4df2b4
#define public_4df2d9 _public_4df2d9
#define public_4df2ef _public_4df2ef
#define public_4df310 _public_4df310
#define public_4df32c _public_4df32c
#define public_4df337 _public_4df337
#define public_4df362 _public_4df362
#define public_4df370 _public_4df370
#define public_4df398 _public_4df398
#define public_4df39b _public_4df39b

PROC_DECLARE(0x4df080, internal_4df080, public_4df080);
extern "C" NAKED register_t __cdecl internal_4df080()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_4df21a
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_4df0d2
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_4df0d4
        public_4df0d2 : nop
        mov ecx, edi
        public_4df0d4 : nop
        test ebx, ebx
        jne public_4df0dc
        xor edx, edx
        jmp public_4df0ef
        public_4df0dc : nop
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_4df0ef : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_4df0fc
        xor eax, eax
        public_4df0fc : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_5b7e84
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_4df138
        public_4df120 : nop
        push esi
        push ebp
        call public_4df8d0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x14
        add esp, 8
        add ebp, 0x14
        cmp esi, eax
        jne public_4df120
        public_4df138 : nop
        test edi, edi
        mov esi, ebp
        jbe public_4df162
        mov dword ptr ss : [esp+0x24], edi
        public_4df142 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_4df8d0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x14
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_4df142
        mov eax, dword ptr ss : [esp+0x20]
        public_4df162 : nop
        lea ecx, ds:[edi+edi*4]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_4df193
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_4df180
        public_4df17a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_4df180 : nop
        add ecx, esi
        push esi
        push ecx
        call public_4df8d0
        add esi, 0x14
        add esp, 8
        cmp esi, ebp
        jne public_4df17a
        public_4df193 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_4df1ae
        lea ecx, ds:[ecx]
        public_4df1a0 : nop
        mov ecx, esi
        call public_4dd9a0
        add esi, 0x14
        cmp esi, ebp
        jne public_4df1a0
        public_4df1ae : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_4df1ec
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*4]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4df1ec : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*4]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4df21a : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_4df2ef
        lea eax, ds:[edi+edi*4]
        shl eax, 2
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_4df277
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_4df260
        public_4df255 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_4df260 : nop
        add eax, ebp
        push ebp
        push eax
        call public_4df8d0
        add ebp, 0x14
        add esp, 8
        cmp ebp, esi
        jne public_4df255
        mov ecx, dword ptr ss : [esp+0x10]
        public_4df277 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_4df2a7
        public_4df297 : nop
        push ebp
        push esi
        call public_4df8d0
        add esp, 8
        add esi, 0x14
        dec edi
        jne public_4df297
        public_4df2a7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+8]
        cmp ebx, edi
        mov esi, ebx
        je public_4df2d9
        public_4df2b4 : nop
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_5c6f9c]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        add esi, 0x14
        cmp esi, edi
        jne public_4df2b4
        mov eax, dword ptr ss : [esp+0x10]
        public_4df2d9 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add ecx, edx
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4df2ef : nop
        test edi, edi
        jbe public_4df39b
        lea eax, ds:[edi+edi*4]
        shl eax, 2
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_4df32c
        nop 
        lea esp, ss:[esp]
        public_4df310 : nop
        push edi
        push ebp
        call public_4df8d0
        add edi, 0x14
        add esp, 8
        add ebp, 0x14
        cmp edi, esi
        jne public_4df310
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_4df32c : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, eax
        cmp ebx, esi
        je public_4df362
        public_4df337 : nop
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        sub esi, 0x14
        sub edi, 0x14
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6f9c]
        cmp esi, ebx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        jne public_4df337
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_4df362 : nop
        lea ebp, ds:[eax+ebx]
        cmp ebx, ebp
        mov esi, ebx
        je public_4df398
        mov edi, dword ptr ss : [esp+0x28]
        nop 
        public_4df370 : nop
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6f9c]
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], edx
        add esi, 0x14
        cmp esi, ebp
        jne public_4df370
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_4df398 : nop
        add dword ptr ds : [ecx+8], eax
        public_4df39b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x4df080)
    }
}

#undef public_4df0d2
#undef public_4df0d4
#undef public_4df0dc
#undef public_4df0ef
#undef public_4df0fc
#undef public_4df120
#undef public_4df138
#undef public_4df142
#undef public_4df162
#undef public_4df17a
#undef public_4df180
#undef public_4df193
#undef public_4df1a0
#undef public_4df1ae
#undef public_4df1ec
#undef public_4df21a
#undef public_4df255
#undef public_4df260
#undef public_4df277
#undef public_4df297
#undef public_4df2a7
#undef public_4df2b4
#undef public_4df2d9
#undef public_4df2ef
#undef public_4df310
#undef public_4df32c
#undef public_4df337
#undef public_4df362
#undef public_4df370
#undef public_4df398
#undef public_4df39b
