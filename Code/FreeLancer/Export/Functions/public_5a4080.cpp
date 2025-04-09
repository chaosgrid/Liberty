#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_423b90);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_59d580);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_5a40c0 _public_5a40c0
#define public_5a40e6 _public_5a40e6
#define public_5a40e8 _public_5a40e8
#define public_5a4222 _public_5a4222
#define public_5a425d _public_5a425d
#define public_5a4291 _public_5a4291
#define public_5a42b9 _public_5a42b9

PROC_DECLARE(0x5a4080, internal_5a4080, public_5a4080);
extern "C" NAKED register_t __cdecl internal_5a4080()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call public_5a17b0
        mov al, byte ptr ds : [ebx+0x35E]
        test al, al
        je public_5a40e8
        call public_42d680
        fadd dword ptr ds : [ebx+0x360]
        fcom dword ptr ds : [public_5c75dc]
        fst dword ptr ds : [ebx+0x360]
        fnstsw ax
        test ah, 0x41
        jne public_5a40e6
        mov cl, byte ptr ds : [ebx+0x35F]
        nop 
        lea esp, ss:[esp]
        public_5a40c0 : nop
        fsub dword ptr ds : [public_5c75dc]
        test cl, cl
        sete cl
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        je public_5a40c0
        fstp dword ptr ds : [ebx+0x360]
        mov byte ptr ds : [ebx+0x35F], cl
        jmp public_5a40e8
        public_5a40e6 : nop
        fstp st(0)
        public_5a40e8 : nop
        test byte ptr ds : [ebx+0x388], 1
        je public_5a42b9
        fild dword ptr ds : [public_616840]
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0x30]
        fsub dword ptr ds : [public_67dc60]
        fdiv dword ptr ds : [public_67dc70]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        fild dword ptr ds : [public_616844]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        push eax
        fsub dword ptr ds : [public_67dc64]
        fdiv dword ptr ds : [public_67dc74]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [public_67dc9c]
        mov dword ptr ss : [esp+0x2C], ecx
        fchs 
        mov ecx, 9
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        rep movsd
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x30], edx
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call public_423b90
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x28], ecx
        fmul dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x2C], edx
        faddp 
        add esp, 0xC
        fld dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x18]
        fmul dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, ebx
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        call dword ptr ds : [eax+0x10]
        test al, al
        mov al, byte ptr ds : [ebx+0x35C]
        je public_5a425d
        test al, 4
        jne public_5a42b9
        mov ecx, dword ptr ds : [ebx+4]
        or al, 4
        test ecx, ecx
        mov byte ptr ds : [ebx+0x35C], al
        je public_5a4222
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_5a4222
        mov eax, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebx
        call dword ptr ds : [eax+8]
        push eax
        push 0x2B
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_5a4222 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_5a42b9
        call public_59d580
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_5a42b9
        mov eax, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebx
        call dword ptr ds : [eax+8]
        push eax
        push 0x2C
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        pop edi
        pop esi
        pop ebx
        add esp, 0x48
        ret 
        public_5a425d : nop
        test al, 4
        je public_5a42b9
        mov ecx, dword ptr ds : [ebx+4]
        and al, 0xFB
        test ecx, ecx
        mov byte ptr ds : [ebx+0x35C], al
        je public_5a4291
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_5a4291
        mov eax, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebx
        call dword ptr ds : [eax+8]
        push eax
        push 0x2A
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_5a4291 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_5a42b9
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_5a42b9
        mov eax, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebx
        call dword ptr ds : [eax+8]
        push eax
        push 0x2D
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_5a42b9 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x5a4080)
    }
}

#undef public_5a40c0
#undef public_5a40e6
#undef public_5a40e8
#undef public_5a4222
#undef public_5a425d
#undef public_5a4291
#undef public_5a42b9
