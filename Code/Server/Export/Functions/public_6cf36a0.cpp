#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee9e0);

#define public_6cf36bd _public_6cf36bd
#define public_6cf36d2 _public_6cf36d2
#define public_6cf36d4 _public_6cf36d4
#define public_6cf371b _public_6cf371b
#define public_6cf3736 _public_6cf3736
#define public_6cf37cf _public_6cf37cf
#define public_6cf3808 _public_6cf3808
#define public_6cf3819 _public_6cf3819
#define public_6cf3847 _public_6cf3847
#define public_6cf3849 _public_6cf3849
#define public_6cf3853 _public_6cf3853

PROC_DECLARE(0x6cf36a0, internal_6cf36a0, public_6cf36a0);
extern "C" NAKED register_t __cdecl internal_6cf36a0()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push ebp
        mov esi, ecx
        call public_6cee9e0
        test al, al
        jne public_6cf36bd
        pop esi
        pop ebp
        add esp, 8
        ret 4
        public_6cf36bd : nop
        push ebx
        push edi
        mov edi, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp edi, ebx
        je public_6cf36d2
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0xF
        cmp al, 0xF
        je public_6cf36d4
        public_6cf36d2 : nop
        xor edi, edi
        public_6cf36d4 : nop
        mov eax, dword ptr ds : [public_6d64194]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi]
        push ecx
        push ebp
        mov ecx, edi
        call dword ptr ds : [edx+0x50]
        fld dword ptr ds : [edi+0xE8]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 1
        jne public_6cf3847
        mov edx, dword ptr ds : [esi+0x74]
        push edx
        call dword ptr ds : [public_6d64460]
        add esp, 4
        test al, al
        jne public_6cf371b
        mov eax, dword ptr ds : [esi+0x74]
        push 1
        push eax
        call dword ptr ds : [public_6d6445c]
        add esp, 8
        public_6cf371b : nop
        cmp dword ptr ds : [esi+0x78], ebx
        je public_6cf3819
        mov ecx, edi
        call dword ptr ds : [public_6d64458]
        test al, al
        je public_6cf3736
        mov ebx, dword ptr ds : [edi+0xE4]
        public_6cf3736 : nop
        mov edx, dword ptr ds : [esi+0x74]
        lea edi, ds:[esi+0x84]
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebx
        push 0x7FFDF8
        xor ebp, ebp
        push edx
        mov dword ptr ss : [esp+0x24], ebp
        call dword ptr ds : [public_6d64454]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x14
        cmp eax, ebp
        je public_6cf3808
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebp, dword ptr ds : [public_6d6419c]
        call ebp
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebx, eax
        call ebp
        fld dword ptr ds : [eax+0x84]
        fmul dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [eax]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ss : [esp+0x14]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_6cf37cf
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xB0]
        push ecx
        push 1
        jmp public_6cf3849
        public_6cf37cf : nop
        lea ecx, ds:[esi+0x60]
        call dword ptr ds : [public_6d64450]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+0x90]
        mov byte ptr ds : [esi+0x80], 1
        fst dword ptr ds : [esi+0x90]
        fcomp dword ptr ds : [public_6d65520]
        fnstsw ax
        test ah, 0x41
        jne public_6cf3853
        mov dword ptr ds : [esi+0x90], 0
        jmp public_6cf3853
        public_6cf3808 : nop
        mov byte ptr ds : [esi+0x80], 0
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi], ebp
        jmp public_6cf3853
        public_6cf3819 : nop
        mov byte ptr ds : [esi+0x80], 0
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x84], ebx
        mov al, byte ptr ds : [esi+0x94]
        test al, al
        je public_6cf3853
        mov eax, dword ptr ds : [esi+0x98]
        push eax
        push 1
        jmp public_6cf3849
        public_6cf3847 : nop
        push ebx
        push ebx
        public_6cf3849 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x158]
        public_6cf3853 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x160]
        neg al
        pop edi
        pop ebx
        pop esi
        pop ebp
        sbb eax, eax
        inc eax
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6cf36a0)
    }
}

#undef public_6cf36bd
#undef public_6cf36d2
#undef public_6cf36d4
#undef public_6cf371b
#undef public_6cf3736
#undef public_6cf37cf
#undef public_6cf3808
#undef public_6cf3819
#undef public_6cf3847
#undef public_6cf3849
#undef public_6cf3853
