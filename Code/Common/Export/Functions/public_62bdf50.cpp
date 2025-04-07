#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62becd0);
CLANG_FORWARD_PROC_SYMBOL(public_62bed10);
CLANG_FORWARD_PROC_SYMBOL(public_62bed30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62bdf67 _public_62bdf67
#define public_62bdf7b _public_62bdf7b
#define public_62bdf81 _public_62bdf81
#define public_62bdf89 _public_62bdf89
#define public_62bdfb0 _public_62bdfb0
#define public_62bdfcc _public_62bdfcc
#define public_62bdfe1 _public_62bdfe1
#define public_62bdff0 _public_62bdff0
#define public_62bdffa _public_62bdffa
#define public_62bdfff _public_62bdfff
#define public_62be001 _public_62be001
#define public_62be00b _public_62be00b

PROC_DECLARE(0x62bdf50, internal_62bdf50, public_62bdf50);
extern "C" NAKED register_t __cdecl internal_62bdf50()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x2C]
        push edi
        mov edi, dword ptr ds : [ecx]
        cmp edi, ecx
        mov dword ptr ss : [esp+8], ebp
        je public_62bdf81
        mov dx, word ptr ss : [esp+0x10]
        public_62bdf67 : nop
        cmp word ptr ds : [edi+0xC], dx
        jne public_62bdf7b
        fld dword ptr ds : [edi+0x10]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x44
        jnp public_62bdf89
        public_62bdf7b : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ecx
        jne public_62bdf67
        public_62bdf81 : nop
        pop edi
        xor al, al
        pop ebp
        pop ecx
        ret 8
        public_62bdf89 : nop
        push ebx
        push esi
        lea eax, ds:[edi+0x14]
        lea ebx, ss:[ebp+0x10]
        push eax
        mov ecx, ebx
        call public_62becd0
        lea ecx, ds:[edi+0x18]
        push ecx
        mov ecx, ebx
        mov esi, eax
        call public_62bed30
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_62be00b
        mov edi, edi
        public_62bdfb0 : nop
        mov ebx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x18]
        test al, al
        je public_62bdfcc
        mov eax, dword ptr ds : [ebx]
        xor ecx, ecx
        mov cx, word ptr ds : [edi+0xC]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        public_62bdfcc : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62bdfe1
        push eax
        call public_62bed10
        add esp, 4
        jmp public_62bdfff
        public_62bdfe1 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62bdffa
        lea esp, ss:[esp]
        public_62bdff0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_62bdff0
        public_62bdffa : nop
        cmp dword ptr ds : [esi+8], eax
        je public_62be001
        public_62bdfff : nop
        mov esi, eax
        public_62be001 : nop
        cmp esi, dword ptr ss : [esp+0x18]
        jne public_62bdfb0
        mov ebp, dword ptr ss : [esp+0x10]
        public_62be00b : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        push edi
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov eax, dword ptr ss : [ebp+0x30]
        add esp, 4
        pop esi
        pop ebx
        dec eax
        mov dword ptr ss : [ebp+0x30], eax
        pop edi
        mov al, 1
        pop ebp
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62bdf50)
    }
}

#undef public_62bdf67
#undef public_62bdf7b
#undef public_62bdf81
#undef public_62bdf89
#undef public_62bdfb0
#undef public_62bdfcc
#undef public_62bdfe1
#undef public_62bdff0
#undef public_62bdffa
#undef public_62bdfff
#undef public_62be001
#undef public_62be00b
