#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62bbc20 _public_62bbc20
#define public_62bbc30 _public_62bbc30
#define public_62bbc57 _public_62bbc57
#define public_62bbc79 _public_62bbc79
#define public_62bbc83 _public_62bbc83
#define public_62bbca1 _public_62bbca1
#define public_62bbcaa _public_62bbcaa
#define public_62bbcbd _public_62bbcbd
#define public_62bbcc1 _public_62bbcc1
#define public_62bbcd1 _public_62bbcd1

PROC_DECLARE(0x62bbc00, internal_62bbc00, public_62bbc00);
extern "C" NAKED register_t __cdecl internal_62bbc00()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov bp, word ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, esi
        mov dword ptr ss : [esp+0xC], edi
        je public_62bbc30
        lea ebx, ds:[ebx]
        public_62bbc20 : nop
        cmp word ptr ds : [ecx+8], bp
        je public_62bbcaa
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, esi
        jne public_62bbc20
        public_62bbc30 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [esi+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push 0x14
        mov word ptr ss : [esp+0x18], bp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_62bbc57
        mov edi, eax
        public_62bbc57 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_62bbc79
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ebx
        public_62bbc79 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+8]
        mov edi, eax
        pop ebx
        public_62bbc83 : nop
        cmp bp, word ptr ds : [public_63a4aa6]
        jne public_62bbca1
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62bbca1
        mov byte ptr ds : [edi+0xC], 1
        public_62bbca1 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 0xC
        public_62bbcaa : nop
        fld dword ptr ds : [ecx+0xC]
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 5
        jp public_62bbcbd
        fld dword ptr ds : [ecx+0xC]
        jmp public_62bbcc1
        public_62bbcbd : nop
        fld dword ptr ss : [esp+0x24]
        public_62bbcc1 : nop
        mov eax, dword ptr ds : [ecx+0x10]
        fstp dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [esp+0x28]
        cmp eax, edx
        jg public_62bbcd1
        mov eax, edx
        public_62bbcd1 : nop
        mov dword ptr ds : [ecx+0x10], eax
        jmp public_62bbc83
        UNREACHABLE_TRAP(0x62bbc00)
    }
}

#undef public_62bbc20
#undef public_62bbc30
#undef public_62bbc57
#undef public_62bbc79
#undef public_62bbc83
#undef public_62bbca1
#undef public_62bbcaa
#undef public_62bbcbd
#undef public_62bbcc1
#undef public_62bbcd1
