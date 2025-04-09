#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411370);
CLANG_FORWARD_PROC_SYMBOL(public_557170);
CLANG_FORWARD_PROC_SYMBOL(public_5586f0);

#define public_557190 _public_557190
#define public_5571a3 _public_5571a3
#define public_5571c0 _public_5571c0
#define public_557230 _public_557230
#define public_557243 _public_557243
#define public_557250 _public_557250
#define public_557268 _public_557268
#define public_55727b _public_55727b
#define public_557295 _public_557295
#define public_55729f _public_55729f

PROC_DECLARE(0x557170, internal_557170, public_557170);
extern "C" NAKED register_t __cdecl internal_557170()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x3C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [esi]
        test edx, edx
        jle public_5571a3
        mov ecx, ebp
        mov eax, ebx
        sub ecx, ebx
        mov edi, edi
        public_557190 : nop
        mov dword ptr ds : [ecx+eax], 0
        mov dword ptr ds : [eax], 0
        add eax, 4
        dec edx
        jne public_557190
        public_5571a3 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [esi], 0
        mov dword ptr ss : [esp+0x40], eax
        jle public_557295
        push edi
        lea esp, ss:[esp]
        public_5571c0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [ecx+eax*4]
        test esi, esi
        mov dword ptr ss : [esp+0x10], esi
        je public_55727b
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_55727b
        mov dl, byte ptr ss : [esp+0x3C]
        cmp byte ptr ds : [esi+4], dl
        jne public_55727b
        mov edx, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x48]
        push eax
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        push 0
        push 0
        lea edx, ss:[esp+0x28]
        push edx
        lea esi, ds:[ecx+0x98]
        lea edi, ds:[ecx+0xC]
        call public_411370
        push eax
        push esi
        push edi
        call public_5586f0
        add esp, 0x18
        test al, al
        je public_55727b
        mov esi, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [esi]
        xor edx, edx
        test ecx, ecx
        jle public_557243
        nop 
        lea esp, ss:[esp]
        public_557230 : nop
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [ebx+edx*4]
        fnstsw ax
        test ah, 5
        jp public_557243
        inc edx
        cmp edx, ecx
        jl public_557230
        public_557243 : nop
        cmp ecx, edx
        jle public_557268
        mov esi, ebp
        lea eax, ds:[ebx+ecx*4-4]
        sub esi, ebx
        nop 
        public_557250 : nop
        mov edi, dword ptr ds : [eax+esi]
        mov dword ptr ss : [ebp+ecx*4], edi
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [eax+4], edi
        dec ecx
        sub eax, 4
        cmp ecx, edx
        jg public_557250
        mov esi, dword ptr ss : [esp+0x4C]
        public_557268 : nop
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp+edx*4], ecx
        fstp dword ptr ds : [ebx+edx*4]
        inc dword ptr ds : [esi]
        public_55727b : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x28]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x44], eax
        jl public_5571c0
        mov esi, dword ptr ss : [esp+0x4C]
        pop edi
        public_557295 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        cmp dword ptr ds : [esi], eax
        jle public_55729f
        mov dword ptr ds : [esi], eax
        public_55729f : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x557170)
    }
}

#undef public_557190
#undef public_5571a3
#undef public_5571c0
#undef public_557230
#undef public_557243
#undef public_557250
#undef public_557268
#undef public_55727b
#undef public_557295
#undef public_55729f
