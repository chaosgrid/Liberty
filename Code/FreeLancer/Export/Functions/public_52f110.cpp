#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_52f110);
CLANG_FORWARD_PROC_SYMBOL(public_54bc80);

#define public_52f12a _public_52f12a
#define public_52f134 _public_52f134
#define public_52f13c _public_52f13c
#define public_52f180 _public_52f180
#define public_52f1f9 _public_52f1f9
#define public_52f286 _public_52f286
#define public_52f290 _public_52f290
#define public_52f29a _public_52f29a
#define public_52f2b5 _public_52f2b5
#define public_52f2d0 _public_52f2d0
#define public_52f2dc _public_52f2dc
#define public_52f349 _public_52f349
#define public_52f358 _public_52f358
#define public_52f376 _public_52f376
#define public_52f39a _public_52f39a
#define public_52f3a9 _public_52f3a9
#define public_52f3ba _public_52f3ba

PROC_DECLARE(0x52f110, internal_52f110, public_52f110);
extern "C" NAKED register_t __cdecl internal_52f110()
{
    __asm
    {
        sub esp, 0x28
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x44]
        test al, al
        je public_52f12a
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, eax
        jne public_52f13c
        mov eax, dword ptr ds : [esi+0x48]
        jmp public_52f134
        public_52f12a : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        jne public_52f13c
        mov eax, dword ptr ds : [esi+0x4C]
        public_52f134 : nop
        test eax, eax
        je public_52f3ba
        public_52f13c : nop
        mov eax, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [eax+0xB8]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x14], eax
        je public_52f3a9
        push edi
        lea esp, ss:[esp]
        public_52f180 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+4]
        cmp dword ptr ds : [edi+0x14], 0x400
        jne public_52f1f9
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        test al, al
        je public_52f1f9
        mov ecx, edi
        call dword ptr ds : [public_5c68dc]
        test al, al
        je public_52f1f9
        mov ecx, edi
        call dword ptr ds : [public_5c68d8]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x48]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        public_52f1f9 : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x18]
        jne public_52f180
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        pop edi
        je public_52f3a9
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_52f3a9
        fild dword ptr ss : [esp+0xC]
        lea edx, ds:[esi+0x34]
        push esi
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], eax
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [esi]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+8], eax
        fstp st(0)
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_52f29a
        mov al, byte ptr ds : [esi+0x44]
        test al, al
        je public_52f286
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, eax
        jne public_52f290
        mov eax, dword ptr ds : [esi+0x48]
        jmp public_52f290
        public_52f286 : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        jne public_52f290
        mov eax, dword ptr ds : [esi+0x4C]
        public_52f290 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x58]
        public_52f29a : nop
        fld dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_5c68ec]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 5
        jp public_52f2b5
        fld dword ptr ds : [public_5c7474]
        jmp public_52f2dc
        public_52f2b5 : nop
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [public_5c68e8]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x41
        jne public_52f2d0
        fld dword ptr ds : [public_5c75dc]
        jmp public_52f2dc
        public_52f2d0 : nop
        fld dword ptr ss : [esp+8]
        fsub dword ptr ds : [ecx]
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [ecx]
        fdivp 
        public_52f2dc : nop
        fmul qword ptr ds : [public_5d7e50]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        fadd qword ptr ds : [public_5cf100]
        fldlg2 
        fxch 
        fyl2x 
        fmul qword ptr ds : [public_5c9ce8]
        fstp dword ptr ss : [esp]
        call dword ptr ds : [eax+0x80]
        mov ecx, dword ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ds : [public_673378]
        jne public_52f358
        call public_54bc80
        test al, al
        je public_52f358
        mov al, byte ptr ds : [esi+0x44]
        test al, al
        je public_52f3ba
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        mov byte ptr ds : [esi+0x44], 0
        jne public_52f349
        mov eax, dword ptr ds : [public_5c68e0]
        push eax
        call public_42ae40
        mov dword ptr ds : [esi+0x48], eax
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_52f349 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x60]
        pop esi
        pop ebp
        add esp, 0x28
        ret 4
        public_52f358 : nop
        mov al, byte ptr ds : [esi+0x44]
        cmp al, 1
        je public_52f3ba
        test al, al
        jne public_52f376
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ds : [esi+0x44], 1
        call dword ptr ds : [eax+0x60]
        pop esi
        pop ebp
        add esp, 0x28
        ret 4
        public_52f376 : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        mov byte ptr ds : [esi+0x44], 0
        jne public_52f39a
        mov ecx, dword ptr ds : [public_5c68e0]
        push ecx
        call public_42ae40
        mov dword ptr ds : [esi+0x48], eax
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_52f39a : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x60]
        pop esi
        pop ebp
        add esp, 0x28
        ret 4
        public_52f3a9 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x14]
        test al, al
        je public_52f3ba
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        public_52f3ba : nop
        pop esi
        pop ebp
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x52f110)
    }
}

#undef public_52f12a
#undef public_52f134
#undef public_52f13c
#undef public_52f180
#undef public_52f1f9
#undef public_52f286
#undef public_52f290
#undef public_52f29a
#undef public_52f2b5
#undef public_52f2d0
#undef public_52f2dc
#undef public_52f349
#undef public_52f358
#undef public_52f376
#undef public_52f39a
#undef public_52f3a9
#undef public_52f3ba
