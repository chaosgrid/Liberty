#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66142f0);
CLANG_FORWARD_PROC_SYMBOL(public_66152d0);
CLANG_FORWARD_PROC_SYMBOL(public_6615ec0);
CLANG_FORWARD_PROC_SYMBOL(public_66181e0);
CLANG_FORWARD_PROC_SYMBOL(public_6618ad0);
CLANG_FORWARD_PROC_SYMBOL(public_661a140);
CLANG_FORWARD_PROC_SYMBOL(public_661a190);
CLANG_FORWARD_PROC_SYMBOL(public_661b420);
CLANG_FORWARD_PROC_SYMBOL(public_6627050);

#define public_6615818 _public_6615818
#define public_6615832 _public_6615832
#define public_6615854 _public_6615854
#define public_6615867 _public_6615867
#define public_6615899 _public_6615899
#define public_66158a6 _public_66158a6
#define public_66158af _public_66158af
#define public_66158cd _public_66158cd
#define public_66158da _public_66158da
#define public_66158e3 _public_66158e3
#define public_66158f5 _public_66158f5
#define public_6615930 _public_6615930
#define public_6615944 _public_6615944

PROC_DECLARE(0x66157f0, internal_66157f0, public_66157f0);
extern "C" NAKED register_t __cdecl internal_66157f0()
{
    __asm
    {
        sub esp, 0xC
        lea eax, ss:[esp+0x10]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        push eax
        lea ecx, ds:[edi+0x28]
        call public_6627050
        mov ecx, dword ptr ds : [edi+0x2C]
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        je public_6615832
        mov esi, 0xFFFFFFFB
        public_6615818 : nop
        mov eax, dword ptr ds : [eax+0xC]
        lea ecx, ss:[esp+0x20]
        and dword ptr ds : [eax+0x34], esi
        call public_66142f0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi+0x2C]
        cmp eax, ecx
        jne public_6615818
        public_6615832 : nop
        lea ecx, ss:[esp+0x10]
        lea ebx, ds:[edi+0x3C]
        push ecx
        mov ecx, ebx
        call public_6627050
        mov eax, dword ptr ds : [edi+0x40]
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x24]
        cmp ecx, eax
        je public_66158e3
        public_6615854 : nop
        mov edx, dword ptr ds : [ecx+0x14]
        lea esi, ds:[ecx+0x10]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x24], eax
        mov edx, dword ptr ds : [esi+4]
        cmp eax, edx
        je public_66158af
        public_6615867 : nop
        lea ecx, ds:[eax+0x1C]
        push ebp
        add eax, 0xC
        push ecx
        push eax
        mov ecx, edi
        call public_66152d0
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+0x24]
        test ecx, ecx
        jne public_6615899
        lea edx, ss:[esp+0x14]
        push eax
        push edx
        mov ecx, esi
        call public_6618ad0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], eax
        jmp public_66158a6
        public_6615899 : nop
        lea ecx, ss:[esp+0x24]
        call public_661a140
        mov eax, dword ptr ss : [esp+0x24]
        public_66158a6 : nop
        cmp eax, dword ptr ds : [esi+4]
        jne public_6615867
        mov ecx, dword ptr ss : [esp+0x10]
        public_66158af : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_66158cd
        lea eax, ss:[esp+0x18]
        push ecx
        push eax
        mov ecx, ebx
        call public_66181e0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_66158da
        public_66158cd : nop
        lea ecx, ss:[esp+0x10]
        call public_661a190
        mov ecx, dword ptr ss : [esp+0x10]
        public_66158da : nop
        cmp ecx, dword ptr ds : [edi+0x40]
        jne public_6615854
        public_66158e3 : nop
        mov ecx, dword ptr ds : [edi+0x2C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        je public_6615944
        mov ebx, 1
        public_66158f5 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        test byte ptr ds : [ecx+0x38], bl
        je public_6615930
        mov edx, dword ptr ds : [ecx+0x34]
        shr edx, 2
        test bl, dl
        jne public_6615930
        push ebp
        call public_661b420
        cmp eax, ebx
        jne public_6615930
        mov eax, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax+0xC]
        mov cl, byte ptr ds : [eax+0x38]
        and cl, 0xFE
        mov byte ptr ds : [eax+0x38], cl
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx+0xC]
        mov ecx, edi
        push edx
        call public_6615ec0
        public_6615930 : nop
        lea ecx, ss:[esp+0x20]
        call public_66142f0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi+0x2C]
        cmp eax, ecx
        jne public_66158f5
        public_6615944 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x66157f0)
    }
}

#undef public_6615818
#undef public_6615832
#undef public_6615854
#undef public_6615867
#undef public_6615899
#undef public_66158a6
#undef public_66158af
#undef public_66158cd
#undef public_66158da
#undef public_66158e3
#undef public_66158f5
#undef public_6615930
#undef public_6615944
