#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_46a4d0);
CLANG_FORWARD_PROC_SYMBOL(public_46a770);
CLANG_FORWARD_PROC_SYMBOL(public_46c410);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_46e900);
CLANG_FORWARD_PROC_SYMBOL(public_4c4670);
CLANG_FORWARD_PROC_SYMBOL(public_526960);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_57b530);

#define public_46c203 _public_46c203
#define public_46c266 _public_46c266
#define public_46c273 _public_46c273
#define public_46c2a8 _public_46c2a8
#define public_46c2b8 _public_46c2b8
#define public_46c2d0 _public_46c2d0
#define public_46c2db _public_46c2db
#define public_46c2df _public_46c2df
#define public_46c2e7 _public_46c2e7
#define public_46c2f1 _public_46c2f1
#define public_46c2f8 _public_46c2f8
#define public_46c306 _public_46c306
#define public_46c365 _public_46c365
#define public_46c370 _public_46c370
#define public_46c395 _public_46c395
#define public_46c3db _public_46c3db
#define public_46c3f2 _public_46c3f2

PROC_DECLARE(0x46c1d0, internal_46c1d0, public_46c1d0);
extern "C" NAKED register_t __cdecl internal_46c1d0()
{
    __asm
    {
        sub esp, 0x210
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [public_5c6324]
        mov edi, eax
        test edi, edi
        je public_46c395
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_46c306
        mov ebx, dword ptr ds : [public_5c608c]
        push ebp
        public_46c203 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, dword ptr ds : [public_673344]
        mov ebp, dword ptr ds : [esi+0x10]
        jne public_46c2b8
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_4c4670
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_5c6320]
        add esp, 0xC
        cmp ebp, 0xFFFFFFFF
        je public_46c273
        push ebp
        call ebx
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x14
        test eax, eax
        jne public_46c266
        mov word ptr ss : [esp+0x20], ax
        public_46c266 : nop
        lea eax, ss:[esp+0x20]
        push eax
        call public_46a4d0
        add esp, 4
        public_46c273 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, 0xFFFFFFFF
        je public_46c2b8
        push eax
        call ebx
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x128]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x14
        test eax, eax
        jne public_46c2a8
        mov word ptr ss : [esp+0x120], ax
        public_46c2a8 : nop
        lea eax, ss:[esp+0x120]
        push eax
        call public_46a770
        add esp, 4
        public_46c2b8 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [ecx+0x15]
        test al, al
        jne public_46c2df
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_46c2db
        nop 
        lea esp, ss:[esp]
        public_46c2d0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_46c2d0
        public_46c2db : nop
        mov esi, ecx
        jmp public_46c2f8
        public_46c2df : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_46c2f1
        public_46c2e7 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_46c2e7
        public_46c2f1 : nop
        cmp dword ptr ds : [esi+8], eax
        je public_46c2f8
        mov esi, eax
        public_46c2f8 : nop
        cmp esi, dword ptr ds : [edi+4]
        jne public_46c203
        mov ebx, dword ptr ss : [esp+0x14]
        pop ebp
        public_46c306 : nop
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xC], ecx
        je public_46c365
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [eax]
        jne public_46c365
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_46c365
        mov edx, dword ptr ds : [eax+4]
        push edx
        mov ecx, edi
        call public_46e900
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ds : [eax+8], eax
        call public_53e430
        jmp public_46c395
        public_46c365 : nop
        cmp ecx, esi
        je public_46c395
        lea esp, ss:[esp]
        public_46c370 : nop
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_526960
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_46c8c0
        cmp dword ptr ss : [esp+0xC], esi
        jne public_46c370
        public_46c395 : nop
        mov eax, dword ptr ds : [ebx+0x498]
        test eax, eax
        je public_46c3f2
        mov esi, dword ptr ds : [public_66da60]
        test esi, esi
        je public_46c3db
        call dword ptr ds : [public_5c70f0]
        mov ecx, eax
        mov eax, 0x10624DD3
        imul ecx
        mov ecx, dword ptr ds : [esi+0x38]
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ds : [esi+0x3C]
        imul edx, 0x3E8
        sub edx, ecx
        cmp edx, eax
        jbe public_46c3db
        mov ecx, esi
        call public_4684e0
        public_46c3db : nop
        mov ecx, dword ptr ds : [ebx+0x498]
        mov edx, dword ptr ds : [ebx+0x49C]
        cmp edx, dword ptr ds : [ecx]
        je public_46c3f2
        mov ecx, ebx
        call public_46c410
        public_46c3f2 : nop
        mov ecx, ebx
        call public_57b530
        pop edi
        pop esi
        pop ebx
        add esp, 0x210
        ret 
        UNREACHABLE_TRAP(0x46c1d0)
    }
}

#undef public_46c203
#undef public_46c266
#undef public_46c273
#undef public_46c2a8
#undef public_46c2b8
#undef public_46c2d0
#undef public_46c2db
#undef public_46c2df
#undef public_46c2e7
#undef public_46c2f1
#undef public_46c2f8
#undef public_46c306
#undef public_46c365
#undef public_46c370
#undef public_46c395
#undef public_46c3db
#undef public_46c3f2
