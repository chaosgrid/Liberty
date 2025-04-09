#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539000);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0a78);

#define public_539030 _public_539030
#define public_539039 _public_539039
#define public_53903b _public_53903b
#define public_53904c _public_53904c
#define public_539051 _public_539051
#define public_539058 _public_539058
#define public_53906b _public_53906b
#define public_539074 _public_539074
#define public_539078 _public_539078
#define public_539090 _public_539090
#define public_5390a1 _public_5390a1

PROC_DECLARE(0x539000, internal_539000, public_539000);
extern "C" NAKED register_t __cdecl internal_539000()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0a78 @0x539002*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0a78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_5de738
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        xor esi, esi
        lea ecx, ds:[ecx]
        public_539030 : nop
        cmp esi, ebx
        jne public_539039
        mov esi, dword ptr ds : [edi+4]
        jmp public_53903b
        public_539039 : nop
        mov esi, dword ptr ds : [esi]
        public_53903b : nop
        cmp esi, ebx
        je public_539051
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_53904c
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_53904c : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_539030
        public_539051 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_539078
        public_539058 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_53906b
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x10], eax
        jmp public_539074
        public_53906b : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_539074 : nop
        cmp esi, ebx
        jne public_539058
        public_539078 : nop
        mov esi, dword ptr ds : [edi+0x10]
        cmp esi, ebx
        mov dword ptr ds : [edi], offset public_5de754
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        je public_5390a1
        nop 
        lea esp, ss:[esp]
        public_539090 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp esi, ebx
        jne public_539090
        public_5390a1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x539000)
    }
}

#undef public_539030
#undef public_539039
#undef public_53903b
#undef public_53904c
#undef public_539051
#undef public_539058
#undef public_53906b
#undef public_539074
#undef public_539078
#undef public_539090
#undef public_5390a1
