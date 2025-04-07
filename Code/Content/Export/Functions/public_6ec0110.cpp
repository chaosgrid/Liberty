#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0110);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1670);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6ec0156 _public_6ec0156
#define public_6ec01ad _public_6ec01ad
#define public_6ec01ba _public_6ec01ba
#define public_6ec01bf _public_6ec01bf
#define public_6ec01c1 _public_6ec01c1
#define public_6ec01e9 _public_6ec01e9
#define public_6ec0210 _public_6ec0210
#define public_6ec0226 _public_6ec0226
#define public_6ec0230 _public_6ec0230
#define public_6ec023a _public_6ec023a
#define public_6ec0241 _public_6ec0241
#define public_6ec0245 _public_6ec0245
#define public_6ec026e _public_6ec026e
#define public_6ec0274 _public_6ec0274

PROC_DECLARE(0x6ec0110, internal_6ec0110, public_6ec0110);
extern "C" NAKED register_t __cdecl internal_6ec0110()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea edi, ds:[esi+0x18]
        xor ebx, ebx
        add ecx, 0xEC
        push edi
        mov dword ptr ss : [esp+0x18], ebx
        call public_6fa7200
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0xEC
        push edi
        mov dword ptr ss : [esp+0x14], eax
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        je public_6ec01e9
        mov ebp, dword ptr ds : [public_6fb3664]
        public_6ec0156 : nop
        lea eax, ss:[esp+0x24]
        push eax
        mov eax, dword ptr ds : [ecx+0x10]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_6ec01c1
        fld dword ptr ss : [esp+0x18]
        mov cl, byte ptr ds : [esi+0x20]
        test cl, cl
        fsub dword ptr ds : [esi+0xC]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [esi+0x14]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        je public_6ec01ad
        fcom dword ptr ds : [esi+0x1C]
        fnstsw ax
        test ah, 5
        jnp public_6ec01ba
        test cl, cl
        jne public_6ec01bf
        public_6ec01ad : nop
        fcomp dword ptr ds : [esi+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_6ec01c1
        inc ebx
        jmp public_6ec01c1
        public_6ec01ba : nop
        fstp st(0)
        inc ebx
        jmp public_6ec01c1
        public_6ec01bf : nop
        fstp st(0)
        public_6ec01c1 : nop
        lea ecx, ss:[esp+0x10]
        call public_6f1fa00
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0xEC
        push edi
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        jne public_6ec0156
        mov dword ptr ss : [esp+0x14], ebx
        public_6ec01e9 : nop
        mov ebp, dword ptr ds : [esi+4]
        add ebp, 0xEC
        push edi
        mov ecx, ebp
        call public_6ed1670
        push edi
        mov ecx, ebp
        mov ebx, eax
        call public_6fa7200
        xor edi, edi
        cmp eax, ebx
        je public_6ec0245
        lea ebx, ds:[ebx]
        public_6ec0210 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        inc edi
        test dl, dl
        jne public_6ec0226
        push ecx
        call public_6ed1d10
        add esp, 4
        jmp public_6ec0241
        public_6ec0226 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ec023a
        mov edi, edi
        public_6ec0230 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6ec0230
        public_6ec023a : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6ec0241
        mov eax, ecx
        public_6ec0241 : nop
        cmp eax, ebx
        jne public_6ec0210
        public_6ec0245 : nop
        cmp dword ptr ss : [esp+0x14], edi
        jne public_6ec026e
        fld dword ptr ds : [esi+0x24]
        fsub dword ptr ss : [esp+0x4C]
        fst dword ptr ds : [esi+0x24]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jp public_6ec0274
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x38
        ret 4
        public_6ec026e : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [esi+0x24], ecx
        public_6ec0274 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x6ec0110)
    }
}

#undef public_6ec0156
#undef public_6ec01ad
#undef public_6ec01ba
#undef public_6ec01bf
#undef public_6ec01c1
#undef public_6ec01e9
#undef public_6ec0210
#undef public_6ec0226
#undef public_6ec0230
#undef public_6ec023a
#undef public_6ec0241
#undef public_6ec0245
#undef public_6ec026e
#undef public_6ec0274
