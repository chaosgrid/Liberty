#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_509f30);
CLANG_FORWARD_PROC_SYMBOL(public_50c620);
CLANG_FORWARD_PROC_SYMBOL(public_51f810);
CLANG_FORWARD_PROC_SYMBOL(public_51f950);
CLANG_FORWARD_PROC_SYMBOL(public_520170);

#define public_51fa43 _public_51fa43
#define public_51fa72 _public_51fa72
#define public_51facc _public_51facc
#define public_51faf0 _public_51faf0
#define public_51fb3b _public_51fb3b
#define public_51fb7e _public_51fb7e

PROC_DECLARE(0x51f950, internal_51f950, public_51f950);
extern "C" NAKED register_t __cdecl internal_51f950()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi]
        push eax
        push esi
        call dword ptr ds : [ecx+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_67524c]
        test eax, eax
        jne public_51fa72
        mov eax, dword ptr ds : [public_675244]
        test eax, eax
        je public_51fa43
        mov edx, dword ptr ds : [public_610534]
        mov eax, dword ptr ds : [esi]
        push edx
        push esi
        call dword ptr ds : [eax+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        mov ecx, dword ptr ds : [public_675244]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [esi]
        push eax
        push esi
        call dword ptr ds : [ecx+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        push 0
        push 1
        push esi
        mov ecx, ebx
        call public_51f810
        mov edx, dword ptr ds : [public_610534]
        mov eax, dword ptr ds : [esi]
        push edx
        push esi
        call dword ptr ds : [eax+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        mov ecx, dword ptr ds : [public_675244]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [esi]
        push eax
        push esi
        call dword ptr ds : [ecx+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        public_51fa43 : nop
        push 0
        push 0
        push esi
        mov ecx, ebx
        call public_51f810
        push esi
        call public_509f30
        push esi
        call public_520170
        add esp, 8
        push 0
        push 3
        push esi
        mov ecx, ebx
        call public_51f810
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_51fa72 : nop
        push 0
        push 0
        push esi
        mov ecx, ebx
        call public_51f810
        push 0
        push 3
        push esi
        mov ecx, ebx
        call public_51f810
        cmp dword ptr ds : [public_67524c], 1
        jne public_51facc
        mov edx, dword ptr ds : [public_610534]
        mov eax, dword ptr ds : [esi]
        push edx
        push esi
        call dword ptr ds : [eax+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        mov ecx, dword ptr ds : [public_675244]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [esi]
        push eax
        push esi
        call dword ptr ds : [ecx+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        public_51facc : nop
        mov ecx, dword ptr ds : [public_675244]
        mov edx, dword ptr ds : [ecx]
        push edi
        push esi
        call dword ptr ds : [edx+0xC]
        call public_50c620
        mov eax, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_51fb3b
        push ebp
        lea esp, ss:[esp]
        public_51faf0 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [public_675244]
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        push ecx
        mov ecx, dword ptr ds : [public_675244]
        fstp dword ptr ss : [esp]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x28]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [public_675244]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x24]
        fmul dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        push esi
        call dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x14]
        jne public_51faf0
        pop ebp
        public_51fb3b : nop
        cmp dword ptr ds : [public_67524c], 1
        pop edi
        jne public_51fb7e
        mov ecx, dword ptr ds : [public_610534]
        mov edx, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [edx+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        mov ecx, dword ptr ds : [public_675244]
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [edx+0x20]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_40fb60
        public_51fb7e : nop
        push 0
        push 1
        push esi
        mov ecx, ebx
        call public_51f810
        mov ecx, dword ptr ds : [public_675244]
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0x18]
        push esi
        call public_520170
        add esp, 4
        push 0
        push 4
        push esi
        mov ecx, ebx
        call public_51f810
        mov ecx, dword ptr ds : [public_675244]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x1C]
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x51f950)
    }
}

#undef public_51fa43
#undef public_51fa72
#undef public_51facc
#undef public_51faf0
#undef public_51fb3b
#undef public_51fb7e
