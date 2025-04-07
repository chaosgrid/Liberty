#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cd60);
CLANG_FORWARD_PROC_SYMBOL(public_6f7dfd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7cd94 _public_6f7cd94
#define public_6f7cd96 _public_6f7cd96
#define public_6f7cd9e _public_6f7cd9e
#define public_6f7cda3 _public_6f7cda3
#define public_6f7cdaf _public_6f7cdaf
#define public_6f7cdd0 _public_6f7cdd0
#define public_6f7cde8 _public_6f7cde8
#define public_6f7cdf2 _public_6f7cdf2
#define public_6f7ce12 _public_6f7ce12
#define public_6f7ce2b _public_6f7ce2b
#define public_6f7ce30 _public_6f7ce30
#define public_6f7ce43 _public_6f7ce43
#define public_6f7ce50 _public_6f7ce50
#define public_6f7ce5e _public_6f7ce5e
#define public_6f7ce9a _public_6f7ce9a
#define public_6f7ceb9 _public_6f7ceb9
#define public_6f7cee8 _public_6f7cee8
#define public_6f7cef0 _public_6f7cef0
#define public_6f7cf0b _public_6f7cf0b
#define public_6f7cf20 _public_6f7cf20
#define public_6f7cf38 _public_6f7cf38
#define public_6f7cf40 _public_6f7cf40
#define public_6f7cf57 _public_6f7cf57
#define public_6f7cf69 _public_6f7cf69
#define public_6f7cf80 _public_6f7cf80
#define public_6f7cfa4 _public_6f7cfa4
#define public_6f7cfb0 _public_6f7cfb0
#define public_6f7cfc6 _public_6f7cfc6
#define public_6f7cfd1 _public_6f7cfd1
#define public_6f7cfe4 _public_6f7cfe4
#define public_6f7cfe7 _public_6f7cfe7

PROC_DECLARE(0x6f7cd60, internal_6f7cd60, public_6f7cd60);
extern "C" NAKED register_t __cdecl internal_6f7cd60()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 4
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6f7ceb9
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6f7cd94
        mov eax, esi
        sub eax, ecx
        sar eax, 4
        cmp ebp, eax
        jb public_6f7cd96
        public_6f7cd94 : nop
        mov eax, ebp
        public_6f7cd96 : nop
        test ecx, ecx
        jne public_6f7cd9e
        xor esi, esi
        jmp public_6f7cda3
        public_6f7cd9e : nop
        sub esi, ecx
        sar esi, 4
        public_6f7cda3 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f7cdaf
        xor eax, eax
        public_6f7cdaf : nop
        shl eax, 4
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6f7cde8
        public_6f7cdd0 : nop
        push esi
        push edi
        call public_6f7dfd0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, eax
        jne public_6f7cdd0
        public_6f7cde8 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_6f7ce12
        mov dword ptr ss : [esp+0x24], ebp
        public_6f7cdf2 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_6f7dfd0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x10
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f7cdf2
        mov eax, dword ptr ss : [esp+0x20]
        public_6f7ce12 : nop
        mov edx, ebp
        shl edx, 4
        lea ecx, ds:[edx+edi]
        mov edi, dword ptr ds : [ebx+8]
        cmp eax, edi
        mov esi, eax
        je public_6f7ce43
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6f7ce30
        public_6f7ce2b : nop
        mov ecx, dword ptr ss : [esp+0x20]
        nop 
        public_6f7ce30 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6f7dfd0
        add esi, 0x10
        add esp, 8
        cmp esi, edi
        jne public_6f7ce2b
        public_6f7ce43 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, edi
        je public_6f7ce5e
        lea ecx, ds:[ecx]
        public_6f7ce50 : nop
        mov ecx, esi
        call public_6eec8d0
        add esi, 0x10
        cmp esi, edi
        jne public_6f7ce50
        public_6f7ce5e : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+4]
        shl eax, 4
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [ebx+0xC], eax
        jne public_6f7ce9a
        xor eax, eax
        mov eax, ebp
        pop edi
        shl eax, 4
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f7ce9a : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 4
        add eax, ebp
        pop edi
        shl eax, 4
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f7ceb9 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, edi
        sar edx, 4
        cmp edx, ebp
        jae public_6f7cf69
        mov eax, ebp
        shl eax, 4
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], eax
        lea edx, ds:[eax+edi]
        mov ebx, edi
        je public_6f7cf0b
        mov eax, edx
        sub eax, edi
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6f7cef0
        public_6f7cee8 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6f7cef0 : nop
        add eax, ebx
        push ebx
        push eax
        call public_6f7dfd0
        add ebx, 0x10
        add esp, 8
        cmp ebx, esi
        jne public_6f7cee8
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7cf0b : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov edx, esi
        sub edx, edi
        sar edx, 4
        sub ebp, edx
        je public_6f7cf38
        lea ecx, ds:[ecx]
        public_6f7cf20 : nop
        push ebx
        push esi
        call public_6f7dfd0
        add esp, 8
        add esi, 0x10
        dec ebp
        jne public_6f7cf20
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7cf38 : nop
        mov esi, dword ptr ds : [ecx+8]
        cmp edi, esi
        je public_6f7cf57
        nop 
        public_6f7cf40 : nop
        push ebx
        mov ecx, edi
        call public_6f68ac0
        add edi, 0x10
        cmp edi, esi
        jne public_6f7cf40
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7cf57 : nop
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f7cf69 : nop
        test ebp, ebp
        jbe public_6f7cfe7
        shl ebp, 4
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6f7cfa4
        lea esp, ss:[esp]
        public_6f7cf80 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push ebx
        push eax
        call public_6f7dfd0
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x10
        add ebx, 0x10
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6f7cf80
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7cfa4 : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_6f7cfc6
        nop 
        public_6f7cfb0 : nop
        sub esi, 0x10
        sub ebx, 0x10
        push esi
        mov ecx, ebx
        call public_6f68ac0
        cmp esi, edi
        jne public_6f7cfb0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7cfc6 : nop
        lea esi, ds:[edi+ebp]
        cmp edi, esi
        je public_6f7cfe4
        mov ebx, dword ptr ss : [esp+0x28]
        public_6f7cfd1 : nop
        push ebx
        mov ecx, edi
        call public_6f68ac0
        add edi, 0x10
        cmp edi, esi
        jne public_6f7cfd1
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7cfe4 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6f7cfe7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f7cd60)
    }
}

#undef public_6f7cd94
#undef public_6f7cd96
#undef public_6f7cd9e
#undef public_6f7cda3
#undef public_6f7cdaf
#undef public_6f7cdd0
#undef public_6f7cde8
#undef public_6f7cdf2
#undef public_6f7ce12
#undef public_6f7ce2b
#undef public_6f7ce30
#undef public_6f7ce43
#undef public_6f7ce50
#undef public_6f7ce5e
#undef public_6f7ce9a
#undef public_6f7ceb9
#undef public_6f7cee8
#undef public_6f7cef0
#undef public_6f7cf0b
#undef public_6f7cf20
#undef public_6f7cf38
#undef public_6f7cf40
#undef public_6f7cf57
#undef public_6f7cf69
#undef public_6f7cf80
#undef public_6f7cfa4
#undef public_6f7cfb0
#undef public_6f7cfc6
#undef public_6f7cfd1
#undef public_6f7cfe4
#undef public_6f7cfe7
