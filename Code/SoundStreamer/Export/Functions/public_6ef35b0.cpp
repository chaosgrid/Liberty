#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1080);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ef27a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3790);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4680);

#define public_6ef35d0 _public_6ef35d0
#define public_6ef3610 _public_6ef3610
#define public_6ef3635 _public_6ef3635
#define public_6ef36ae _public_6ef36ae
#define public_6ef36bc _public_6ef36bc
#define public_6ef36d1 _public_6ef36d1
#define public_6ef36d3 _public_6ef36d3
#define public_6ef36f6 _public_6ef36f6
#define public_6ef3702 _public_6ef3702
#define public_6ef3741 _public_6ef3741
#define public_6ef3743 _public_6ef3743
#define public_6ef374d _public_6ef374d
#define public_6ef3757 _public_6ef3757
#define public_6ef3774 _public_6ef3774

PROC_DECLARE(0x6ef35b0, internal_6ef35b0, public_6ef35b0);
extern "C" NAKED register_t __cdecl internal_6ef35b0()
{
    __asm
    {
        sub esp, 0x28
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x64]
        or eax, 1
        mov dword ptr ss : [ebp+0x64], eax
        mov al, byte ptr ss : [ebp+0x64]
        test al, al
        js public_6ef3774
        push ebx
        push esi
        push edi
        lea ecx, ds:[ecx]
        public_6ef35d0 : nop
        mov ecx, dword ptr ss : [ebp+0x3C]
        xor edi, edi
        cmp ecx, edi
        je public_6ef3757
        mov eax, dword ptr ss : [ebp+0x40]
        sub eax, ecx
        sar eax, 2
        cmp eax, edi
        je public_6ef3757
        lea eax, ss:[ebp+0x20]
        push eax
        call dword ptr ds : [public_6efc050]
        mov ebx, dword ptr ss : [ebp+0x3C]
        cmp ebx, dword ptr ss : [ebp+0x40]
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x1C], 0x42700000
        je public_6ef374d
        nop 
        public_6ef3610 : nop
        mov esi, dword ptr ds : [ebx]
        cmp esi, edi
        je public_6ef36d3
        mov ecx, esi
        call public_6ef1b70
        mov eax, dword ptr ds : [esi+0x80]
        cmp eax, 3
        je public_6ef3635
        cmp eax, 2
        jne public_6ef36d3
        public_6ef3635 : nop
        mov ecx, esi
        call public_6ef1080
        mov ecx, dword ptr ds : [esi+0xF0]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edi
        fild qword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], edi
        fstp dword ptr ss : [esp+0x18]
        fild qword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_6efc16c]
        fmul dword ptr ds : [public_6efc1e0]
        fstp dword ptr ss : [esp+0x14]
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6ef36bc
        movzx edi, word ptr ds : [esi+0xE4]
        fstp st(0)
        test edi, edi
        jbe public_6ef36ae
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x18]
        call public_6ef4680
        lea eax, ds:[eax+edi-1]
        xor edx, edx
        div edi
        mov ecx, esi
        imul eax, edi
        push eax
        call public_6ef27a0
        xor edi, edi
        jmp public_6ef36d3
        public_6ef36ae : nop
        xor eax, eax
        push eax
        mov ecx, esi
        call public_6ef27a0
        xor edi, edi
        jmp public_6ef36d3
        public_6ef36bc : nop
        fcom dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_6ef36d1
        fstp dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ef36d3
        public_6ef36d1 : nop
        fstp st(0)
        public_6ef36d3 : nop
        mov eax, dword ptr ss : [ebp+0x40]
        add ebx, 4
        cmp ebx, eax
        jne public_6ef3610
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, edi
        je public_6ef374d
        mov eax, dword ptr ss : [ebp+0x3C]
        cmp eax, edi
        jne public_6ef36f6
        mov dword ptr ss : [esp+0x18], edi
        jmp public_6ef3702
        public_6ef36f6 : nop
        mov edx, dword ptr ss : [ebp+0x40]
        sub edx, eax
        sar edx, 2
        mov dword ptr ss : [esp+0x18], edx
        public_6ef3702 : nop
        movzx esi, word ptr ds : [ecx+0xE4]
        cmp esi, edi
        jbe public_6ef3741
        fild dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+0xF0]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], edi
        fmul dword ptr ds : [public_6efc170]
        fmul dword ptr ds : [public_6efc1e0]
        fimul dword ptr ss : [esp+0x30]
        call public_6ef4680
        lea eax, ds:[eax+esi-1]
        xor edx, edx
        div esi
        imul eax, esi
        jmp public_6ef3743
        public_6ef3741 : nop
        xor eax, eax
        public_6ef3743 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        call public_6ef27a0
        public_6ef374d : nop
        lea eax, ss:[ebp+0x20]
        push eax
        call dword ptr ds : [public_6efc04c]
        public_6ef3757 : nop
        mov ecx, ebp
        call public_6ef3790
        push 0x28
        call dword ptr ds : [public_6efc054]
        mov al, byte ptr ss : [ebp+0x64]
        test al, al
        jns public_6ef35d0
        pop edi
        pop esi
        pop ebx
        public_6ef3774 : nop
        mov ecx, dword ptr ss : [ebp+0x64]
        or ecx, 2
        mov dword ptr ss : [ebp+0x64], ecx
        mov eax, 1
        pop ebp
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6ef35b0)
    }
}

#undef public_6ef35d0
#undef public_6ef3610
#undef public_6ef3635
#undef public_6ef36ae
#undef public_6ef36bc
#undef public_6ef36d1
#undef public_6ef36d3
#undef public_6ef36f6
#undef public_6ef3702
#undef public_6ef3741
#undef public_6ef3743
#undef public_6ef374d
#undef public_6ef3757
#undef public_6ef3774
