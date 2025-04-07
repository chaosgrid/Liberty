#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f29c10);
CLANG_FORWARD_PROC_SYMBOL(public_6f29d80);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae54b);

#define public_6f29c70 _public_6f29c70
#define public_6f29c74 _public_6f29c74
#define public_6f29c77 _public_6f29c77
#define public_6f29ca0 _public_6f29ca0
#define public_6f29ce0 _public_6f29ce0
#define public_6f29ced _public_6f29ced
#define public_6f29cf5 _public_6f29cf5
#define public_6f29cf9 _public_6f29cf9
#define public_6f29d10 _public_6f29d10
#define public_6f29d53 _public_6f29d53

PROC_DECLARE(0x6f29c10, internal_6f29c10, public_6f29c10);
extern "C" NAKED register_t __cdecl internal_6f29c10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae54b @0x6f29c12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae54b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10C
        mov eax, dword ptr ss : [esp+0x124]
        mov ecx, dword ptr ss : [esp+0x120]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x124]
        push edi
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push esi
        push edx
        call public_6f29d80
        add esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x14]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x120], ecx
        je public_6f29c70
        mov eax, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        jne public_6f29c74
        public_6f29c70 : nop
        xor ebp, ebp
        jmp public_6f29c77
        public_6f29c74 : nop
        mov ebp, dword ptr ds : [eax+8]
        public_6f29c77 : nop
        test esi, 0x3FFFFFFF
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f29cf9
        test ebp, 0x3FFFFFFF
        je public_6f29cf9
        push ebx
        mov ebx, dword ptr ds : [public_6fb3030]
        lea esi, ss:[esp+0x50]
        mov edi, 0xA
        nop 
        public_6f29ca0 : nop
        mov ecx, esi
        call ebx
        add esi, 4
        dec edi
        jne public_6f29ca0
        mov eax, dword ptr ss : [esp+0x134]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x124], 0
        call dword ptr ds : [public_6fb34f4]
        add esp, 0xC
        test eax, eax
        pop ebx
        jne public_6f29cf5
        mov ecx, dword ptr ss : [esp+0x114]
        test ecx, ecx
        jle public_6f29cf5
        public_6f29ce0 : nop
        cmp dword ptr ss : [esp+eax*4+0x24], ebp
        je public_6f29ced
        inc eax
        cmp eax, ecx
        jl public_6f29ce0
        jmp public_6f29cf5
        public_6f29ced : nop
        mov eax, dword ptr ss : [esp+eax*4+0x74]
        mov dword ptr ss : [esp+0x1C], eax
        public_6f29cf5 : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_6f29cf9 : nop
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x120], 0xFFFFFFFF
        je public_6f29d53
        lea ebx, ds:[ebx]
        public_6f29d10 : nop
        push 0
        lea ecx, ss:[esp+0x24]
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push ecx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], ecx
        jne public_6f29d10
        mov edi, dword ptr ss : [esp+0x14]
        public_6f29d53 : nop
        push edi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x11C]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x118
        ret 
        UNREACHABLE_TRAP(0x6f29c10)
    }
}

#undef public_6f29c70
#undef public_6f29c74
#undef public_6f29c77
#undef public_6f29ca0
#undef public_6f29ce0
#undef public_6f29ced
#undef public_6f29cf5
#undef public_6f29cf9
#undef public_6f29d10
#undef public_6f29d53
