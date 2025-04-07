#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eebc60);
CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f21210);

#define public_6eebc90 _public_6eebc90
#define public_6eebca0 _public_6eebca0
#define public_6eebca3 _public_6eebca3
#define public_6eebca7 _public_6eebca7
#define public_6eebcda _public_6eebcda
#define public_6eebce3 _public_6eebce3
#define public_6eebcf0 _public_6eebcf0
#define public_6eebd06 _public_6eebd06

PROC_DECLARE(0x6eebc60, internal_6eebc60, public_6eebc60);
extern "C" NAKED register_t __cdecl internal_6eebc60()
{
    __asm
    {
        sub esp, 0xC
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_6fcf114]
        push ebx
        mov ebx, dword ptr ds : [public_6fcf118]
        mov al, 1
        push esi
        mov dword ptr ss : [esp+0xC], ecx
        mov byte ptr ss : [esp+0x10], al
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ebx
        push edi
        mov edi, edx
        je public_6eebca7
        lea esp, ss:[esp]
        public_6eebc90 : nop
        cmp ecx, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        mov edi, esi
        je public_6eebca0
        mov esi, dword ptr ds : [esi]
        jmp public_6eebca3
        public_6eebca0 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6eebca3 : nop
        cmp esi, ebx
        jne public_6eebc90
        public_6eebca7 : nop
        mov cl, byte ptr ds : [public_6fcf11c]
        test cl, cl
        jne public_6eebcf0
        test al, al
        mov dword ptr ss : [esp+0x1C], edi
        je public_6eebce3
        cmp edi, dword ptr ds : [edx]
        jne public_6eebcda
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_6fcf110
        call public_6f21210
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_6eebcda : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f00610
        public_6eebce3 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [edx+0xC], ecx
        jge public_6eebd06
        public_6eebcf0 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        lea ecx, ss:[esp+0x14]
        push esi
        push ecx
        mov ecx, offset public_6fcf110
        call public_6f21210
        public_6eebd06 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6eebc60)
    }
}

#undef public_6eebc90
#undef public_6eebca0
#undef public_6eebca3
#undef public_6eebca7
#undef public_6eebcda
#undef public_6eebce3
#undef public_6eebcf0
#undef public_6eebd06
