#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6ab00);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ae30);
CLANG_FORWARD_PROC_SYMBOL(public_6f6afa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b400);

#define public_6f6ab3b _public_6f6ab3b
#define public_6f6ab43 _public_6f6ab43
#define public_6f6ab81 _public_6f6ab81
#define public_6f6aba0 _public_6f6aba0
#define public_6f6aba6 _public_6f6aba6
#define public_6f6abb0 _public_6f6abb0
#define public_6f6abc9 _public_6f6abc9
#define public_6f6abcd _public_6f6abcd
#define public_6f6abf6 _public_6f6abf6
#define public_6f6ac10 _public_6f6ac10
#define public_6f6ac60 _public_6f6ac60
#define public_6f6ac70 _public_6f6ac70
#define public_6f6ac82 _public_6f6ac82
#define public_6f6acc4 _public_6f6acc4
#define public_6f6acf0 _public_6f6acf0
#define public_6f6acfd _public_6f6acfd
#define public_6f6ad18 _public_6f6ad18
#define public_6f6ad1c _public_6f6ad1c
#define public_6f6ad31 _public_6f6ad31
#define public_6f6ad67 _public_6f6ad67
#define public_6f6ad70 _public_6f6ad70
#define public_6f6ad89 _public_6f6ad89
#define public_6f6ad9c _public_6f6ad9c
#define public_6f6ada7 _public_6f6ada7
#define public_6f6adb8 _public_6f6adb8
#define public_6f6adc0 _public_6f6adc0
#define public_6f6ade2 _public_6f6ade2
#define public_6f6ae01 _public_6f6ae01
#define public_6f6ae22 _public_6f6ae22

PROC_DECLARE(0x6f6ab00, internal_6f6ab00, public_6f6ab00);
extern "C" NAKED register_t __cdecl internal_6f6ab00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        mov eax, ecx
        sub eax, edi
        sar eax, 5
        cmp eax, 0x10
        jg public_6f6abf6
        cmp edi, ecx
        je public_6f6ae22
        lea ebp, ds:[edi+0x20]
        cmp ebp, ecx
        je public_6f6ae22
        lea ebx, ss:[ebp-0x20]
        mov dword ptr ss : [esp+0x10], ebx
        jmp public_6f6ab43
        public_6f6ab3b : nop
        mov edi, dword ptr ss : [esp+0x5C]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f6ab43 : nop
        push ebp
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6fb3240]
        lea eax, ss:[esp+0x38]
        push edi
        push eax
        call dword ptr ss : [esp+0x6C]
        add esp, 8
        test al, al
        jne public_6f6aba6
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6fb3240]
        lea edx, ss:[esp+0x18]
        push ebx
        push edx
        mov edi, ebp
        call dword ptr ss : [esp+0x6C]
        add esp, 8
        test al, al
        je public_6f6aba0
        public_6f6ab81 : nop
        mov esi, ebx
        mov ecx, 8
        rep movsd
        mov edi, ebx
        sub ebx, 0x20
        lea eax, ss:[esp+0x18]
        push ebx
        push eax
        call dword ptr ss : [esp+0x6C]
        add esp, 8
        test al, al
        jne public_6f6ab81
        public_6f6aba0 : nop
        lea esi, ss:[esp+0x18]
        jmp public_6f6abcd
        public_6f6aba6 : nop
        cmp edi, ebp
        mov eax, ebp
        je public_6f6abc9
        lea esp, ss:[esp]
        public_6f6abb0 : nop
        sub eax, 0x20
        lea edi, ds:[eax+0x20]
        mov ecx, 8
        mov esi, eax
        rep movsd
        mov ecx, dword ptr ss : [esp+0x5C]
        cmp eax, ecx
        jne public_6f6abb0
        mov edi, ecx
        public_6f6abc9 : nop
        lea esi, ss:[esp+0x38]
        public_6f6abcd : nop
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, 8
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        add ebp, 0x20
        add ecx, 0x20
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6f6ab3b
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 
        public_6f6abf6 : nop
        cmp eax, 0x10
        mov ebp, ecx
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], edi
        jle public_6f6ad18
        lea esp, ss:[esp]
        public_6f6ac10 : nop
        mov esi, dword ptr ss : [esp+0x64]
        push esi
        sub esp, 0x20
        lea edx, ss:[ebp-0x20]
        mov ecx, esp
        push edx
        call dword ptr ds : [public_6fb3240]
        mov eax, ebp
        sub eax, edi
        sar eax, 5
        cdq 
        sub eax, edx
        sar eax, 1
        shl eax, 5
        sub esp, 0x20
        add eax, edi
        mov ecx, esp
        push eax
        call dword ptr ds : [public_6fb3240]
        sub esp, 0x20
        mov ecx, esp
        push edi
        call dword ptr ds : [public_6fb3240]
        lea eax, ss:[esp+0x9C]
        push eax
        call public_6f6b400
        add esp, 0x68
        mov ebx, edi
        nop 
        public_6f6ac60 : nop
        lea ecx, ss:[esp+0x38]
        push ecx
        push ebx
        call esi
        add esp, 8
        test al, al
        je public_6f6ac82
        nop 
        public_6f6ac70 : nop
        lea edx, ss:[esp+0x38]
        push edx
        add ebx, 0x20
        push ebx
        call esi
        add esp, 8
        test al, al
        jne public_6f6ac70
        public_6f6ac82 : nop
        sub ebp, 0x20
        lea eax, ss:[esp+0x38]
        push ebp
        push eax
        call esi
        add esp, 8
        test al, al
        jne public_6f6ac82
        cmp ebp, ebx
        jbe public_6f6acc4
        push ebx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6fb3240]
        mov edi, ebx
        mov ecx, 8
        mov esi, ebp
        rep movsd
        mov ecx, 8
        lea esi, ss:[esp+0x18]
        mov edi, ebp
        rep movsd
        mov esi, dword ptr ss : [esp+0x64]
        add ebx, 0x20
        jmp public_6f6ac60
        public_6f6acc4 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, ebp
        mov edx, ebx
        sub ecx, ebx
        sub edx, edi
        and ecx, 0xFFFFFFE0
        and edx, 0xFFFFFFE0
        cmp ecx, edx
        push 0
        push esi
        jg public_6f6acf0
        push ebp
        push ebx
        call public_6f6ae30
        mov dword ptr ss : [esp+0x20], ebx
        mov ebp, ebx
        jmp public_6f6acfd
        public_6f6acf0 : nop
        push ebx
        push edi
        call public_6f6ae30
        mov dword ptr ss : [esp+0x24], ebx
        mov edi, ebx
        public_6f6acfd : nop
        mov eax, ebp
        sub eax, edi
        and eax, 0xFFFFFFE0
        add esp, 0x10
        cmp eax, 0x200
        jg public_6f6ac10
        mov edi, dword ptr ss : [esp+0x5C]
        jmp public_6f6ad1c
        public_6f6ad18 : nop
        mov esi, dword ptr ss : [esp+0x64]
        public_6f6ad1c : nop
        lea eax, ds:[edi+0x200]
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6f6ada7
        lea ebp, ds:[edi+0x20]
        cmp ebp, eax
        je public_6f6ada7
        public_6f6ad31 : nop
        push ebp
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6fb3240]
        lea ecx, ss:[esp+0x38]
        push edi
        push ecx
        call esi
        add esp, 8
        test al, al
        jne public_6f6ad67
        push esi
        sub esp, 0x20
        lea edx, ss:[esp+0x5C]
        mov ecx, esp
        push edx
        call dword ptr ds : [public_6fb3240]
        push ebp
        call public_6f6afa0
        add esp, 0x28
        jmp public_6f6ad9c
        public_6f6ad67 : nop
        cmp edi, ebp
        mov eax, ebp
        je public_6f6ad89
        lea ecx, ds:[ecx]
        public_6f6ad70 : nop
        sub eax, 0x20
        lea edi, ds:[eax+0x20]
        mov ecx, 8
        mov esi, eax
        rep movsd
        mov ecx, dword ptr ss : [esp+0x5C]
        cmp eax, ecx
        jne public_6f6ad70
        mov edi, ecx
        public_6f6ad89 : nop
        mov ecx, 8
        lea esi, ss:[esp+0x38]
        rep movsd
        mov esi, dword ptr ss : [esp+0x64]
        mov edi, dword ptr ss : [esp+0x5C]
        public_6f6ad9c : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x20
        cmp ebp, eax
        jne public_6f6ad31
        public_6f6ada7 : nop
        mov ebp, eax
        cmp ebp, dword ptr ss : [esp+0x60]
        je public_6f6ae22
        lea eax, ss:[ebp-0x20]
        mov dword ptr ss : [esp+0x5C], eax
        jmp public_6f6adc0
        public_6f6adb8 : nop
        mov esi, dword ptr ss : [esp+0x64]
        lea esp, ss:[esp]
        public_6f6adc0 : nop
        push ebp
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6fb3240]
        mov ebx, dword ptr ss : [esp+0x5C]
        mov ecx, ebx
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        mov edi, ebp
        call esi
        add esp, 8
        test al, al
        je public_6f6ae01
        public_6f6ade2 : nop
        mov esi, ebx
        mov ecx, 8
        rep movsd
        mov edi, ebx
        sub ebx, 0x20
        lea eax, ss:[esp+0x38]
        push ebx
        push eax
        call dword ptr ss : [esp+0x6C]
        add esp, 8
        test al, al
        jne public_6f6ade2
        public_6f6ae01 : nop
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, 8
        lea esi, ss:[esp+0x38]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x5C]
        add ebp, 0x20
        add ecx, 0x20
        cmp ebp, eax
        mov dword ptr ss : [esp+0x5C], ecx
        jne public_6f6adb8
        public_6f6ae22 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x6f6ab00)
    }
}

#undef public_6f6ab3b
#undef public_6f6ab43
#undef public_6f6ab81
#undef public_6f6aba0
#undef public_6f6aba6
#undef public_6f6abb0
#undef public_6f6abc9
#undef public_6f6abcd
#undef public_6f6abf6
#undef public_6f6ac10
#undef public_6f6ac60
#undef public_6f6ac70
#undef public_6f6ac82
#undef public_6f6acc4
#undef public_6f6acf0
#undef public_6f6acfd
#undef public_6f6ad18
#undef public_6f6ad1c
#undef public_6f6ad31
#undef public_6f6ad67
#undef public_6f6ad70
#undef public_6f6ad89
#undef public_6f6ad9c
#undef public_6f6ada7
#undef public_6f6adb8
#undef public_6f6adc0
#undef public_6f6ade2
#undef public_6f6ae01
#undef public_6f6ae22
