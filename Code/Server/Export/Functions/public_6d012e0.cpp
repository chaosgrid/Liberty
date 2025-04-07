#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6870);
CLANG_FORWARD_PROC_SYMBOL(public_6d012e0);

#define public_6d01331 _public_6d01331
#define public_6d01363 _public_6d01363
#define public_6d01394 _public_6d01394
#define public_6d013c1 _public_6d013c1
#define public_6d013d0 _public_6d013d0
#define public_6d013d4 _public_6d013d4
#define public_6d01400 _public_6d01400
#define public_6d0142e _public_6d0142e
#define public_6d0143d _public_6d0143d

PROC_DECLARE(0x6d012e0, internal_6d012e0, public_6d012e0);
extern "C" NAKED register_t __cdecl internal_6d012e0()
{
    __asm
    {
        sub esp, 0x20
        fld dword ptr ss : [esp+0x24]
        push ebx
        fcomp dword ptr ds : [public_6d65520]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+0x10]
        fnstsw ax
        mov dword ptr ss : [esp+0x18], ebp
        test ah, 0x41
        jne public_6d01331
        mov esi, dword ptr ss : [esp+0x38]
        mov ebx, dword ptr ds : [edi]
        push esi
        call public_6ce6870
        mov ecx, eax
        call dword ptr ds : [public_6d641f4]
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [esp]
        call dword ptr ds : [ebx+0x1B0]
        pop edi
        mov byte ptr ds : [esi+0xC], 1
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x20
        ret 8
        public_6d01331 : nop
        mov ecx, ebp
        mov byte ptr ss : [esp+0x13], 0
        call dword ptr ds : [public_6d641f0]
        fmul dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x14]
        push esi
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x1B0]
        test al, al
        je public_6d01363
        mov byte ptr ss : [esp+0x13], 1
        public_6d01363 : nop
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        jne public_6d013d4
        push 0x1EE0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6d64204]
        mov ebx, dword ptr ds : [public_6d64200]
        lea edx, ss:[esp+0x20]
        add ebp, 0xE4
        push edx
        mov ecx, ebp
        call ebx
        mov esi, eax
        test esi, esi
        je public_6d013d0
        public_6d01394 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        fmul dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x14]
        push eax
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x210]
        test al, al
        je public_6d013c1
        mov byte ptr ss : [esp+0x13], 1
        public_6d013c1 : nop
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        call ebx
        mov esi, eax
        test esi, esi
        jne public_6d01394
        public_6d013d0 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_6d013d4 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov cl, byte ptr ds : [eax+0xC]
        test cl, cl
        jne public_6d0143d
        mov ebx, dword ptr ds : [public_6d64218]
        lea ecx, ss:[esp+0x18]
        add ebp, 0x144
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1C], 1
        call ebx
        mov esi, eax
        test esi, esi
        je public_6d0143d
        nop 
        public_6d01400 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d642ac]
        fmul dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x14]
        push eax
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x218]
        test al, al
        je public_6d0142e
        mov byte ptr ss : [esp+0x13], 1
        public_6d0142e : nop
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call ebx
        mov esi, eax
        test esi, esi
        jne public_6d01400
        public_6d0143d : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6d012e0)
    }
}

#undef public_6d01331
#undef public_6d01363
#undef public_6d01394
#undef public_6d013c1
#undef public_6d013d0
#undef public_6d013d4
#undef public_6d01400
#undef public_6d0142e
#undef public_6d0143d
