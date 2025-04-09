#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);

#define public_59bc41 _public_59bc41
#define public_59bc51 _public_59bc51
#define public_59bc56 _public_59bc56
#define public_59bc5c _public_59bc5c
#define public_59bc86 _public_59bc86
#define public_59bca1 _public_59bca1
#define public_59bca9 _public_59bca9
#define public_59bd19 _public_59bd19
#define public_59bd61 _public_59bd61
#define public_59bd73 _public_59bd73
#define public_59bd91 _public_59bd91

PROC_DECLARE(0x59bc30, internal_59bc30, public_59bc30);
extern "C" NAKED register_t __cdecl internal_59bc30()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        xor ebx, ebx
        cmp ecx, ebx
        push edi
        je public_59bc5c
        public_59bc41 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov edi, dword ptr ds : [ecx+8]
        je public_59bc51
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_59bc56
        public_59bc51 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_59bc56 : nop
        cmp edi, ebx
        mov ecx, edi
        jne public_59bc41
        public_59bc5c : nop
        cmp dword ptr ds : [esi+0x8C], ebx
        je public_59bd91
        call public_42d680
        fst dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_59bd91
        push ebp
        or ebp, 0xFFFFFFFF
        public_59bc86 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5d043c]
        fnstsw ax
        test ah, 5
        jp public_59bca1
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        jmp public_59bca9
        public_59bca1 : nop
        mov dword ptr ss : [esp+0x14], 0x3E4CCCCD
        public_59bca9 : nop
        mov ecx, dword ptr ds : [esi+0x8C]
        cmp ecx, ebx
        je public_59bd73
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [public_5c6d58]
        lea edi, ss:[esp+0x18]
        push edi
        mov dword ptr ss : [esp+0x1C], ebp
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        fmul dword ptr ds : [esi+0x2F0]
        push ecx
        push eax
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [edx+0x48]
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [esi+0x8C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], ebp
        je public_59bd19
        mov ecx, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        lea ebp, ss:[esp+0x18]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [edx+0x48]
        or ebp, 0xFFFFFFFF
        public_59bd19 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [public_5c6d58]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov dword ptr ss : [esp+0x1C], ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x68]
        cmp dword ptr ss : [esp+0x18], ebx
        jne public_59bd73
        lea ecx, ds:[esi+0x2E0]
        lea eax, ds:[esi+0xD0]
        mov edx, 4
        public_59bd61 : nop
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], bl
        mov dword ptr ds : [ecx], ebp
        add ecx, 4
        add eax, 0x84
        dec edx
        jne public_59bd61
        public_59bd73 : nop
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        je public_59bc86
        pop ebp
        public_59bd91 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x59bc30)
    }
}

#undef public_59bc41
#undef public_59bc51
#undef public_59bc56
#undef public_59bc5c
#undef public_59bc86
#undef public_59bca1
#undef public_59bca9
#undef public_59bd19
#undef public_59bd61
#undef public_59bd73
#undef public_59bd91
