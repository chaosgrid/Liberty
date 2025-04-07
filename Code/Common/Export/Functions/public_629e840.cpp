#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b40);
CLANG_FORWARD_PROC_SYMBOL(public_629d920);
CLANG_FORWARD_PROC_SYMBOL(public_629dbd0);
CLANG_FORWARD_PROC_SYMBOL(public_629e840);
CLANG_FORWARD_PROC_SYMBOL(public_629ebd0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_629e892 _public_629e892
#define public_629e894 _public_629e894
#define public_629e89c _public_629e89c
#define public_629e8af _public_629e8af
#define public_629e8bc _public_629e8bc
#define public_629e8e0 _public_629e8e0
#define public_629e8f8 _public_629e8f8
#define public_629e902 _public_629e902
#define public_629e922 _public_629e922
#define public_629e93a _public_629e93a
#define public_629e940 _public_629e940
#define public_629e953 _public_629e953
#define public_629e960 _public_629e960
#define public_629e96e _public_629e96e
#define public_629e9ac _public_629e9ac
#define public_629e9da _public_629e9da
#define public_629ea15 _public_629ea15
#define public_629ea20 _public_629ea20
#define public_629ea37 _public_629ea37
#define public_629ea57 _public_629ea57
#define public_629ea6b _public_629ea6b
#define public_629ea80 _public_629ea80
#define public_629eaa2 _public_629eaa2
#define public_629eaa4 _public_629eaa4
#define public_629eadf _public_629eadf
#define public_629eaf5 _public_629eaf5
#define public_629eb11 _public_629eb11
#define public_629eb2d _public_629eb2d
#define public_629eb38 _public_629eb38
#define public_629eb60 _public_629eb60
#define public_629eb62 _public_629eb62
#define public_629eb99 _public_629eb99
#define public_629eba4 _public_629eba4
#define public_629ebbb _public_629ebbb
#define public_629ebbe _public_629ebbe

PROC_DECLARE(0x629e840, internal_629e840, public_629e840);
extern "C" NAKED register_t __cdecl internal_629e840()
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
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_629e9da
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_629e892
        mov edx, esi
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        mov ebx, edx
        jb public_629e894
        public_629e892 : nop
        mov ebx, edi
        public_629e894 : nop
        test ecx, ecx
        jne public_629e89c
        xor edx, edx
        jmp public_629e8af
        public_629e89c : nop
        sub esi, ecx
        mov eax, 0x38E38E39
        imul esi
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_629e8af : nop
        lea eax, ds:[edx+ebx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_629e8bc
        xor eax, eax
        public_629e8bc : nop
        lea edx, ds:[eax+eax*8]
        shl edx, 2
        push edx
        call public_6391d9c
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_629e8f8
        public_629e8e0 : nop
        push esi
        push ebp
        call public_629ebd0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x24
        add esp, 8
        add ebp, 0x24
        cmp esi, eax
        jne public_629e8e0
        public_629e8f8 : nop
        test edi, edi
        mov esi, ebp
        jbe public_629e922
        mov dword ptr ss : [esp+0x24], edi
        public_629e902 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push esi
        call public_629ebd0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x24
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_629e902
        mov eax, dword ptr ss : [esp+0x20]
        public_629e922 : nop
        lea ecx, ds:[edi+edi*8]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_629e953
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_629e940
        public_629e93a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_629e940 : nop
        add ecx, esi
        push esi
        push ecx
        call public_629ebd0
        add esi, 0x24
        add esp, 8
        cmp esi, ebp
        jne public_629e93a
        public_629e953 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_629e96e
        lea ecx, ds:[ecx]
        public_629e960 : nop
        mov ecx, esi
        call public_629dbd0
        add esi, 0x24
        cmp esi, ebp
        jne public_629e960
        public_629e96e : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*8]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_629e9ac
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*8]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_629e9ac : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*8]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_629e9da : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebp
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_629eaf5
        lea eax, ds:[edi+edi*8]
        shl eax, 2
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebp
        cmp ebp, esi
        mov ebx, ebp
        je public_629ea37
        sub eax, ebp
        mov dword ptr ss : [esp+0x24], eax
        jmp public_629ea20
        public_629ea15 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_629ea20 : nop
        add eax, ebx
        push ebx
        push eax
        call public_629ebd0
        add ebx, 0x24
        add esp, 8
        cmp ebx, esi
        jne public_629ea15
        mov ecx, dword ptr ss : [esp+0x10]
        public_629ea37 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov edx, esi
        sub edx, ebp
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub edi, edx
        je public_629ea6b
        public_629ea57 : nop
        push ebx
        push esi
        call public_629ebd0
        add esp, 8
        add esi, 0x24
        dec edi
        jne public_629ea57
        mov ecx, dword ptr ss : [esp+0x10]
        public_629ea6b : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_629eadf
        lea edi, ds:[ebx+0x10]
        lea esi, ss:[ebp+8]
        lea esp, ss:[esp]
        public_629ea80 : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [esi-8], ecx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi-4], edx
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_629eaa2
        add eax, 0xFFFFFF64
        test eax, eax
        je public_629eaa2
        add eax, 0x9C
        jmp public_629eaa4
        public_629eaa2 : nop
        xor eax, eax
        public_629eaa4 : nop
        push eax
        mov ecx, esi
        call public_6280b40
        lea eax, ds:[esi+8]
        mov ecx, edi
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [ebx+0x1C]
        mov dword ptr ds : [esi+0x14], edx
        mov eax, dword ptr ds : [ebx+0x20]
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x24
        lea ecx, ds:[esi-8]
        cmp ecx, eax
        jne public_629ea80
        mov ecx, dword ptr ss : [esp+0x10]
        public_629eadf : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_629eaf5 : nop
        test edi, edi
        jbe public_629ebbe
        lea eax, ds:[edi+edi*8]
        shl eax, 2
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebx, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_629eb2d
        public_629eb11 : nop
        push edi
        push ebx
        call public_629ebd0
        add edi, 0x24
        add esp, 8
        add ebx, 0x24
        cmp edi, esi
        jne public_629eb11
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_629eb2d : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, eax
        cmp ebp, esi
        je public_629eb99
        public_629eb38 : nop
        mov eax, dword ptr ds : [esi-0x24]
        sub esi, 0x24
        sub edi, 0x24
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_629eb60
        add eax, 0xFFFFFF64
        test eax, eax
        je public_629eb60
        add eax, 0x9C
        jmp public_629eb62
        public_629eb60 : nop
        xor eax, eax
        public_629eb62 : nop
        push eax
        lea ecx, ds:[edi+8]
        call public_6280b40
        cmp esi, ebp
        lea edx, ds:[esi+0x10]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+0x20], ecx
        jne public_629eb38
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_629eb99 : nop
        lea esi, ds:[eax+ebp]
        cmp ebp, esi
        je public_629ebbb
        mov edi, dword ptr ss : [esp+0x28]
        public_629eba4 : nop
        push edi
        mov ecx, ebp
        call public_629d920
        add ebp, 0x24
        cmp ebp, esi
        jne public_629eba4
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_629ebbb : nop
        add dword ptr ds : [ecx+8], eax
        public_629ebbe : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x629e840)
    }
}

#undef public_629e892
#undef public_629e894
#undef public_629e89c
#undef public_629e8af
#undef public_629e8bc
#undef public_629e8e0
#undef public_629e8f8
#undef public_629e902
#undef public_629e922
#undef public_629e93a
#undef public_629e940
#undef public_629e953
#undef public_629e960
#undef public_629e96e
#undef public_629e9ac
#undef public_629e9da
#undef public_629ea15
#undef public_629ea20
#undef public_629ea37
#undef public_629ea57
#undef public_629ea6b
#undef public_629ea80
#undef public_629eaa2
#undef public_629eaa4
#undef public_629eadf
#undef public_629eaf5
#undef public_629eb11
#undef public_629eb2d
#undef public_629eb38
#undef public_629eb60
#undef public_629eb62
#undef public_629eb99
#undef public_629eba4
#undef public_629ebbb
#undef public_629ebbe
