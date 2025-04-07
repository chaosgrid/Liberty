#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab740);
CLANG_FORWARD_PROC_SYMBOL(public_6eaf080);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1830);
CLANG_FORWARD_PROC_SYMBOL(public_6eb21d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2440);
CLANG_FORWARD_PROC_SYMBOL(public_6f971e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eaf0d2 _public_6eaf0d2
#define public_6eaf0d4 _public_6eaf0d4
#define public_6eaf0dc _public_6eaf0dc
#define public_6eaf0ef _public_6eaf0ef
#define public_6eaf0fc _public_6eaf0fc
#define public_6eaf120 _public_6eaf120
#define public_6eaf138 _public_6eaf138
#define public_6eaf142 _public_6eaf142
#define public_6eaf162 _public_6eaf162
#define public_6eaf17a _public_6eaf17a
#define public_6eaf180 _public_6eaf180
#define public_6eaf193 _public_6eaf193
#define public_6eaf1a0 _public_6eaf1a0
#define public_6eaf1ae _public_6eaf1ae
#define public_6eaf1ec _public_6eaf1ec
#define public_6eaf21a _public_6eaf21a
#define public_6eaf255 _public_6eaf255
#define public_6eaf260 _public_6eaf260
#define public_6eaf277 _public_6eaf277
#define public_6eaf297 _public_6eaf297
#define public_6eaf2a7 _public_6eaf2a7
#define public_6eaf2b2 _public_6eaf2b2
#define public_6eaf2c7 _public_6eaf2c7
#define public_6eaf2dd _public_6eaf2dd
#define public_6eaf2f7 _public_6eaf2f7
#define public_6eaf31b _public_6eaf31b
#define public_6eaf326 _public_6eaf326
#define public_6eaf357 _public_6eaf357
#define public_6eaf362 _public_6eaf362
#define public_6eaf37b _public_6eaf37b
#define public_6eaf37e _public_6eaf37e

PROC_DECLARE(0x6eaf080, internal_6eaf080, public_6eaf080);
extern "C" NAKED register_t __cdecl internal_6eaf080()
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
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6eaf21a
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_6eaf0d2
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_6eaf0d4
        public_6eaf0d2 : nop
        mov ecx, edi
        public_6eaf0d4 : nop
        test ebx, ebx
        jne public_6eaf0dc
        xor edx, edx
        jmp public_6eaf0ef
        public_6eaf0dc : nop
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6eaf0ef : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6eaf0fc
        xor eax, eax
        public_6eaf0fc : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 3
        push ecx
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6eaf138
        public_6eaf120 : nop
        push esi
        push ebp
        call public_6eb1830
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x28
        add esp, 8
        add ebp, 0x28
        cmp esi, eax
        jne public_6eaf120
        public_6eaf138 : nop
        test edi, edi
        mov esi, ebp
        jbe public_6eaf162
        mov dword ptr ss : [esp+0x24], edi
        public_6eaf142 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6eb1830
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x28
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6eaf142
        mov eax, dword ptr ss : [esp+0x20]
        public_6eaf162 : nop
        lea ecx, ds:[edi+edi*4]
        lea ecx, ss:[ebp+ecx*8]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_6eaf193
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6eaf180
        public_6eaf17a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6eaf180 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6eb1830
        add esi, 0x28
        add esp, 8
        cmp esi, ebp
        jne public_6eaf17a
        public_6eaf193 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_6eaf1ae
        lea ecx, ds:[ecx]
        public_6eaf1a0 : nop
        mov ecx, esi
        call public_6eab740
        add esi, 0x28
        cmp esi, ebp
        jne public_6eaf1a0
        public_6eaf1ae : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*8]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_6eaf1ec
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*4]
        pop edi
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eaf1ec : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*4]
        pop edi
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eaf21a : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x66666667
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_6eaf2dd
        lea eax, ds:[edi+edi*4]
        shl eax, 3
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_6eaf277
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6eaf260
        public_6eaf255 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6eaf260 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6eb1830
        add ebp, 0x28
        add esp, 8
        cmp ebp, esi
        jne public_6eaf255
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eaf277 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_6eaf2a7
        public_6eaf297 : nop
        push ebp
        push esi
        call public_6eb1830
        add esp, 8
        add esi, 0x28
        dec edi
        jne public_6eaf297
        public_6eaf2a7 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi+8]
        cmp ebx, esi
        je public_6eaf2c7
        public_6eaf2b2 : nop
        push ebp
        mov ecx, ebx
        call public_6eb21d0
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [ebx+0x24], edx
        add ebx, 0x28
        cmp ebx, esi
        jne public_6eaf2b2
        public_6eaf2c7 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x24]
        add ecx, eax
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eaf2dd : nop
        test edi, edi
        jbe public_6eaf37e
        lea ebp, ds:[edi+edi*4]
        shl ebp, 3
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6eaf31b
        public_6eaf2f7 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        push ecx
        call public_6eb1830
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x28
        add edi, 0x28
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6eaf2f7
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eaf31b : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6eaf357
        public_6eaf326 : nop
        mov edx, dword ptr ds : [esi-0x28]
        sub esi, 0x28
        sub edi, 0x28
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ds:[edi+4]
        mov dword ptr ds : [edi], edx
        call public_6f971e0
        lea ecx, ds:[esi+0x14]
        push ecx
        lea ecx, ds:[edi+0x14]
        call public_6eb2440
        cmp esi, ebx
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edi+0x24], edx
        jne public_6eaf326
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eaf357 : nop
        lea edi, ds:[ebx+ebp]
        cmp ebx, edi
        je public_6eaf37b
        mov esi, dword ptr ss : [esp+0x28]
        public_6eaf362 : nop
        push esi
        mov ecx, ebx
        call public_6eb21d0
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [ebx+0x24], eax
        add ebx, 0x28
        cmp ebx, edi
        jne public_6eaf362
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eaf37b : nop
        add dword ptr ds : [ecx+8], ebp
        public_6eaf37e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6eaf080)
    }
}

#undef public_6eaf0d2
#undef public_6eaf0d4
#undef public_6eaf0dc
#undef public_6eaf0ef
#undef public_6eaf0fc
#undef public_6eaf120
#undef public_6eaf138
#undef public_6eaf142
#undef public_6eaf162
#undef public_6eaf17a
#undef public_6eaf180
#undef public_6eaf193
#undef public_6eaf1a0
#undef public_6eaf1ae
#undef public_6eaf1ec
#undef public_6eaf21a
#undef public_6eaf255
#undef public_6eaf260
#undef public_6eaf277
#undef public_6eaf297
#undef public_6eaf2a7
#undef public_6eaf2b2
#undef public_6eaf2c7
#undef public_6eaf2dd
#undef public_6eaf2f7
#undef public_6eaf31b
#undef public_6eaf326
#undef public_6eaf357
#undef public_6eaf362
#undef public_6eaf37b
#undef public_6eaf37e
