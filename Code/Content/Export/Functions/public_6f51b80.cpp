#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f51b80);
CLANG_FORWARD_PROC_SYMBOL(public_6f52ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52f40);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ac90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6f51ba4 _public_6f51ba4
#define public_6f51bac _public_6f51bac
#define public_6f51bd5 _public_6f51bd5
#define public_6f51bf0 _public_6f51bf0
#define public_6f51c02 _public_6f51c02
#define public_6f51c10 _public_6f51c10
#define public_6f51c1d _public_6f51c1d
#define public_6f51c21 _public_6f51c21
#define public_6f51c7e _public_6f51c7e
#define public_6f51c97 _public_6f51c97
#define public_6f51ca9 _public_6f51ca9
#define public_6f51cd0 _public_6f51cd0
#define public_6f51ce2 _public_6f51ce2
#define public_6f51d00 _public_6f51d00
#define public_6f51d0b _public_6f51d0b
#define public_6f51d0d _public_6f51d0d
#define public_6f51d2a _public_6f51d2a
#define public_6f51d7b _public_6f51d7b
#define public_6f51d8a _public_6f51d8a
#define public_6f51d93 _public_6f51d93

PROC_DECLARE(0x6f51b80, internal_6f51b80, public_6f51b80);
extern "C" NAKED register_t __cdecl internal_6f51b80()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xA8]
        test ecx, ecx
        lea ebp, ds:[esi+0xA4]
        push edi
        mov edi, dword ptr ds : [esi+0x54]
        mov dword ptr ss : [esp+0x14], edi
        jne public_6f51ba4
        xor eax, eax
        jmp public_6f51bac
        public_6f51ba4 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 3
        public_6f51bac : nop
        cmp eax, edi
        jae public_6f51ca9
        call dword ptr ds : [public_6fb3370]
        imul eax, edi
        mov ebx, dword ptr ss : [ebp+8]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x5C]
        sar edi, 0xF
        mov dword ptr ss : [esp+0x18], eax
        public_6f51bd5 : nop
        mov eax, edi
        cdq 
        idiv dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+4]
        sub eax, dword ptr ds : [ecx]
        inc eax
        cmp eax, edx
        ja public_6f51c02
        lea ebx, ds:[ebx]
        public_6f51bf0 : nop
        mov esi, dword ptr ds : [ecx+8]
        add ecx, 8
        sub edx, eax
        mov eax, dword ptr ds : [ecx+4]
        sub eax, esi
        inc eax
        cmp eax, edx
        jbe public_6f51bf0
        public_6f51c02 : nop
        mov esi, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+4]
        add esi, edx
        inc edi
        cmp eax, ebx
        je public_6f51c21
        mov edi, edi
        public_6f51c10 : nop
        cmp dword ptr ds : [eax], esi
        je public_6f51c1d
        add eax, 8
        cmp eax, ebx
        jne public_6f51c10
        jmp public_6f51c21
        public_6f51c1d : nop
        cmp eax, ebx
        jne public_6f51bd5
        public_6f51c21 : nop
        mov al, byte ptr ss : [esp+0x38]
        test al, al
        mov ebx, 1
        je public_6f51c97
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x24], esi
        call public_6f52f40
        cmp eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x38], eax
        je public_6f51c7e
        inc dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x20], eax
        call public_6f7ac90
        mov edx, dword ptr ss : [esp+0x34]
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x20
        ret 8
        public_6f51c7e : nop
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x28], esi
        call public_6f52ec0
        public_6f51c97 : nop
        mov edx, dword ptr ss : [esp+0x34]
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x20
        ret 8
        public_6f51ca9 : nop
        call dword ptr ds : [public_6fb3370]
        imul eax, edi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edx, dword ptr ds : [esi+0x5C]
        mov ecx, dword ptr ds : [edx+4]
        sub ecx, dword ptr ds : [edx]
        sar eax, 0xF
        inc ecx
        cmp ecx, eax
        ja public_6f51ce2
        nop 
        lea esp, ss:[esp]
        public_6f51cd0 : nop
        mov ebx, dword ptr ds : [edx+8]
        add edx, 8
        sub eax, ecx
        mov ecx, dword ptr ds : [edx+4]
        sub ecx, ebx
        inc ecx
        cmp ecx, eax
        jbe public_6f51cd0
        public_6f51ce2 : nop
        mov esi, dword ptr ds : [edx]
        add esi, eax
        mov al, byte ptr ss : [esp+0x38]
        test al, al
        je public_6f51d93
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp+8]
        cmp eax, ecx
        je public_6f51d0b
        lea esp, ss:[esp]
        public_6f51d00 : nop
        cmp dword ptr ds : [eax], esi
        je public_6f51d0d
        add eax, 8
        cmp eax, ecx
        jne public_6f51d00
        public_6f51d0b : nop
        mov eax, ecx
        public_6f51d0d : nop
        cmp eax, ecx
        je public_6f51d2a
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x34]
        inc ecx
        pop edi
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x20
        ret 8
        public_6f51d2a : nop
        lea eax, ss:[esp+0x20]
        mov ebx, 1
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x24], esi
        call public_6f52f40
        mov ecx, dword ptr ss : [ebp+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f51d7b
        lea edx, ss:[esp+0x20]
        push edx
        push ecx
        mov ecx, ebp
        call public_6ef6bb0
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x3C], bl
        call public_6f52f40
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        push edx
        jmp public_6f51d8a
        public_6f51d7b : nop
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x17], 0
        push ecx
        public_6f51d8a : nop
        lea ecx, ss:[esp+0x30]
        call public_6fa6e80
        public_6f51d93 : nop
        mov edx, dword ptr ss : [esp+0x34]
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6f51b80)
    }
}

#undef public_6f51ba4
#undef public_6f51bac
#undef public_6f51bd5
#undef public_6f51bf0
#undef public_6f51c02
#undef public_6f51c10
#undef public_6f51c1d
#undef public_6f51c21
#undef public_6f51c7e
#undef public_6f51c97
#undef public_6f51ca9
#undef public_6f51cd0
#undef public_6f51ce2
#undef public_6f51d00
#undef public_6f51d0b
#undef public_6f51d0d
#undef public_6f51d2a
#undef public_6f51d7b
#undef public_6f51d8a
#undef public_6f51d93
