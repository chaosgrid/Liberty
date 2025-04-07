#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8400);
CLANG_FORWARD_PROC_SYMBOL(public_62eb390);

#define public_62eb3e2 _public_62eb3e2
#define public_62eb3f6 _public_62eb3f6
#define public_62eb460 _public_62eb460
#define public_62eb490 _public_62eb490
#define public_62eb4af _public_62eb4af
#define public_62eb4c0 _public_62eb4c0
#define public_62eb4c2 _public_62eb4c2
#define public_62eb501 _public_62eb501
#define public_62eb503 _public_62eb503
#define public_62eb520 _public_62eb520
#define public_62eb534 _public_62eb534
#define public_62eb540 _public_62eb540

PROC_DECLARE(0x62eb390, internal_62eb390, public_62eb390);
extern "C" NAKED register_t __cdecl internal_62eb390()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0xC], ebx
        je public_62eb540
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62eb540
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        je public_62eb540
        add ecx, 0xFFFFFFF8
        cmp ecx, ebx
        je public_62eb540
        test dword ptr ss : [ebp+0x10], 0x30000000
        je public_62eb3e2
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0x14
        ret 4
        public_62eb3e2 : nop
        mov cl, byte ptr ds : [eax+0xCC]
        test cl, cl
        mov byte ptr ss : [esp+0xB], 0
        je public_62eb3f6
        mov byte ptr ss : [esp+0xB], 1
        public_62eb3f6 : nop
        mov eax, dword ptr ds : [eax+0x1580]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsqrt 
        fcomp dword ptr ds : [public_639b21c]
        fnstsw ax
        test ah, 0x41
        jne public_62eb534
        mov al, byte ptr ss : [esp+0xB]
        test al, al
        jne public_62eb460
        mov eax, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [eax+0x1748]
        mov ecx, dword ptr ss : [ebp+0x1078]
        push edx
        push ecx
        lea ecx, ds:[eax+0x34]
        call public_62e8400
        test al, al
        je public_62eb534
        public_62eb460 : nop
        mov dl, byte ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x1038]
        and dl, 0xF8
        and ecx, 0xE0000000
        cmp eax, ebx
        mov byte ptr ss : [esp+0x10], dl
        mov dword ptr ss : [esp+0x14], ecx
        jbe public_62eb534
        push esi
        push edi
        lea edi, ss:[ebp+0x840]
        nop 
        public_62eb490 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_62eb4af
        fld dword ptr ds : [edi+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62eb520
        mov al, byte ptr ds : [edi-4]
        test al, al
        je public_62eb520
        public_62eb4af : nop
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eb4c0
        lea ecx, ds:[eax-8]
        jmp public_62eb4c2
        public_62eb4c0 : nop
        xor ecx, ecx
        public_62eb4c2 : nop
        mov edx, dword ptr ds : [ecx]
        lea esi, ds:[edi-8]
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x118]
        mov ecx, dword ptr ss : [esp+0x1C]
        and ecx, 0xA
        cmp cl, 0xA
        jne public_62eb520
        mov al, byte ptr ds : [public_63fca5c]
        test al, al
        mov dword ptr ss : [esp+0x14], 1
        jne public_62eb520
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eb501
        add eax, 0xFFFFFFF8
        jmp public_62eb503
        public_62eb501 : nop
        xor eax, eax
        public_62eb503 : nop
        mov edx, dword ptr ds : [eax+4]
        push 0xFFFFFFFF
        push 0
        lea ecx, ds:[eax+4]
        push 1
        push esi
        call dword ptr ds : [edx+0x34]
        cmp dword ptr ds : [edi], 0
        je public_62eb520
        fld dword ptr ds : [edi+0xC]
        fchs 
        fstp dword ptr ds : [edi+0x10]
        public_62eb520 : nop
        mov eax, dword ptr ss : [ebp+0x1038]
        inc ebx
        add edi, 0x20
        cmp ebx, eax
        jb public_62eb490
        pop edi
        pop esi
        public_62eb534 : nop
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        public_62eb540 : nop
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x62eb390)
    }
}

#undef public_62eb3e2
#undef public_62eb3f6
#undef public_62eb460
#undef public_62eb490
#undef public_62eb4af
#undef public_62eb4c0
#undef public_62eb4c2
#undef public_62eb501
#undef public_62eb503
#undef public_62eb520
#undef public_62eb534
#undef public_62eb540
