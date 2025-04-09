#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_407100);
CLANG_FORWARD_PROC_SYMBOL(public_40d740);
CLANG_FORWARD_PROC_SYMBOL(public_40e960);
CLANG_FORWARD_PROC_SYMBOL(public_40e990);
CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5995c0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4081dc _public_4081dc
#define public_4081e1 _public_4081e1
#define public_4081f9 _public_4081f9
#define public_408208 _public_408208
#define public_408230 _public_408230
#define public_408258 _public_408258
#define public_40825d _public_40825d
#define public_408273 _public_408273
#define public_408287 _public_408287
#define public_40828a _public_40828a
#define public_4082b4 _public_4082b4
#define public_4082c5 _public_4082c5
#define public_4082d4 _public_4082d4
#define public_4082df _public_4082df
#define public_4082e7 _public_4082e7
#define public_4082fa _public_4082fa
#define public_40834f _public_40834f
#define public_408360 _public_408360
#define public_40838b _public_40838b
#define public_408395 _public_408395

PROC_DECLARE(0x4081c0, internal_4081c0, public_4081c0);
extern "C" NAKED register_t __cdecl internal_4081c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x50]
        mov cl, al
        and cl, 1
        je public_4081dc
        test al, 8
        mov byte ptr ss : [esp+0x13], 1
        jne public_4081e1
        public_4081dc : nop
        mov byte ptr ss : [esp+0x13], 0
        public_4081e1 : nop
        test cl, cl
        jne public_4081f9
        push 0
        mov ecx, edi
        call public_407100
        test al, al
        je public_4081f9
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        public_4081f9 : nop
        test byte ptr ds : [edi+0x50], 8
        jne public_408208
        mov edx, dword ptr ds : [edi]
        push 0
        mov ecx, edi
        call dword ptr ds : [edx+0x30]
        public_408208 : nop
        mov al, byte ptr ds : [edi+0x50]
        mov bl, 0x10
        test bl, al
        jne public_40828a
        mov ecx, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [public_5c602c]
        call esi
        test al, al
        je public_408287
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_408230
        mov dword ptr ds : [edi+0xC], 0xBF800000
        jmp public_408287
        public_408230 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        call esi
        test al, al
        je public_408287
        mov ecx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 3
        je public_408258
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0x14], 0
        jne public_40825d
        public_408258 : nop
        mov byte ptr ss : [esp+0x14], 1
        public_40825d : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [eax+0x40]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_408273
        mov dword ptr ds : [edi+0xC], 0xBF800000
        jmp public_408287
        public_408273 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [edi+0xC]
        add esp, 0x10
        public_408287 : nop
        or byte ptr ds : [edi+0x50], bl
        public_40828a : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_408395
        mov ecx, dword ptr ds : [edi+0x78]
        test ecx, ecx
        lea esi, ds:[edi+0x74]
        je public_4082d4
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_4082d4
        mov ebx, dword ptr ds : [edi+0x78]
        cmp ebx, dword ptr ds : [edi+0x7C]
        je public_4082c5
        public_4082b4 : nop
        mov ecx, dword ptr ds : [ebx]
        call public_40e990
        mov eax, dword ptr ds : [edi+0x7C]
        add ebx, 4
        cmp ebx, eax
        jne public_4082b4
        public_4082c5 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_5995c0
        public_4082d4 : nop
        mov eax, dword ptr ds : [edi+0x68]
        test eax, eax
        jne public_4082df
        xor ebx, ebx
        jmp public_4082e7
        public_4082df : nop
        mov ebx, dword ptr ds : [edi+0x6C]
        sub ebx, eax
        sar ebx, 2
        public_4082e7 : nop
        mov ecx, esi
        call public_40d740
        cmp eax, ebx
        jae public_40834f
        test ebx, ebx
        mov eax, ebx
        jge public_4082fa
        xor eax, eax
        public_4082fa : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebp, eax
        mov eax, dword ptr ds : [esi+8]
        push ebp
        push eax
        push ecx
        mov ecx, esi
        call public_597c70
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_53aaa0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        lea edx, ss:[ebp+ebx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_5ad970
        lea eax, ss:[ebp+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], ebp
        public_40834f : nop
        mov ebx, dword ptr ds : [edi+0x68]
        cmp ebx, dword ptr ds : [edi+0x6C]
        je public_408395
        mov ebp, dword ptr ss : [esp+0x1C]
        nop 
        lea esp, ss:[esp]
        public_408360 : nop
        push ebx
        call public_40f080
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_40838b
        push ebp
        mov ecx, eax
        call public_40e960
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 1
        push edx
        mov ecx, esi
        call public_537260
        public_40838b : nop
        mov eax, dword ptr ds : [edi+0x6C]
        add ebx, 4
        cmp ebx, eax
        jne public_408360
        public_408395 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x4081c0)
    }
}

#undef public_4081dc
#undef public_4081e1
#undef public_4081f9
#undef public_408208
#undef public_408230
#undef public_408258
#undef public_40825d
#undef public_408273
#undef public_408287
#undef public_40828a
#undef public_4082b4
#undef public_4082c5
#undef public_4082d4
#undef public_4082df
#undef public_4082e7
#undef public_4082fa
#undef public_40834f
#undef public_408360
#undef public_40838b
#undef public_408395
