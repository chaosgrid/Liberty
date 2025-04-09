#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4f7af0);
CLANG_FORWARD_PROC_SYMBOL(public_4f8060);
CLANG_FORWARD_PROC_SYMBOL(public_54bdc0);
CLANG_FORWARD_PROC_SYMBOL(public_54beb0);
CLANG_FORWARD_PROC_SYMBOL(public_54c320);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_54bee5 _public_54bee5
#define public_54bf1c _public_54bf1c
#define public_54c00d _public_54c00d
#define public_54c01b _public_54c01b
#define public_54c02a _public_54c02a
#define public_54c05f _public_54c05f
#define public_54c0a1 _public_54c0a1
#define public_54c0a7 _public_54c0a7
#define public_54c0d0 _public_54c0d0
#define public_54c0f2 _public_54c0f2
#define public_54c0f8 _public_54c0f8
#define public_54c146 _public_54c146
#define public_54c179 _public_54c179
#define public_54c1cf _public_54c1cf
#define public_54c1ef _public_54c1ef
#define public_54c20f _public_54c20f
#define public_54c222 _public_54c222
#define public_54c290 _public_54c290
#define public_54c2b9 _public_54c2b9
#define public_54c2bf _public_54c2bf
#define public_54c2f0 _public_54c2f0
#define public_54c314 _public_54c314

PROC_DECLARE(0x54beb0, internal_54beb0, public_54beb0);
extern "C" NAKED register_t __cdecl internal_54beb0()
{
    __asm
    {
        sub esp, 0x7C
        push ebx
        push ebp
        push esi
        push edi
        push 0x19
        call public_5792b0
        mov esi, dword ptr ds : [public_5c69a0]
        add esp, 4
        xor ebx, ebx
        test eax, eax
        jne public_54bf1c
        cmp dword ptr ds : [public_6797b8], ebx
        jne public_54bee5
        cmp dword ptr ds : [public_6797bc], ebx
        jne public_54bee5
        cmp dword ptr ds : [public_6797c0], ebx
        je public_54bf1c
/*FIXUP public_54bee5 : nop
        push offset public_6797c0 @0x54bee5*/
  FIXUP public_54bee5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6797c0
        call public_54bdc0
/*FIXUP push offset public_6797bc @0x54beef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6797bc
        call public_54bdc0
        add esp, 8
        mov ecx, offset public_679790
        call esi
/*FIXUP push offset public_6797b8 @0x54bf03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6797b8
        mov dword ptr ds : [public_6797b0], ebx
        mov dword ptr ds : [public_6797b4], ebx
        call public_54bdc0
        add esp, 4
        public_54bf1c : nop
        fild dword ptr ds : [public_614084]
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        fstp dword ptr ss : [esp+0x28]
        call public_4215b0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x84], ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x8C], edx
        call dword ptr ds : [ecx+0x10]
        lea edx, ss:[esp+0x5C]
        push edx
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, eax
        call public_54c320
        fld dword ptr ds : [public_614080]
        fcomp dword ptr ds : [public_5c8930]
        mov ebp, dword ptr ds : [public_5c6020]
        fnstsw ax
        test ah, 0x41
        jne public_54c1cf
        lea ecx, ss:[esp+0x10]
        call esi
        lea ecx, ss:[esp+0x10]
        call esi
        mov ecx, dword ptr ss : [esp+0x90]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], 0x3F800000
        je public_54c02a
        mov edx, dword ptr ds : [ecx]
        push 0x200000
        lea eax, ss:[esp+0x54]
        push eax
        call dword ptr ds : [edx+0x30]
        mov esi, eax
        cmp esi, ebx
        je public_54c02a
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x78]
        test al, al
        jne public_54c00d
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e0900 @0x54bfee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0900
        push 0xA8
/*FIXUP push offset public_5e08c4 @0x54bff8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e08c4
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x54c002*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_54c00d : nop
        cmp dword ptr ss : [esp+0x14], ebx
        jne public_54c01b
        mov dword ptr ss : [esp+0x14], 0x32
        public_54c01b : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x18]
        public_54c02a : nop
        mov ecx, dword ptr ds : [public_679790]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        mov ecx, dword ptr ds : [public_6797c0]
        je public_54c0f8
        cmp ecx, ebx
        mov dword ptr ds : [public_679790], eax
        je public_54c05f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [public_6797c0]
        call public_4f7a90
        mov eax, dword ptr ss : [esp+0x10]
        public_54c05f : nop
        mov ecx, dword ptr ds : [public_6797bc]
        mov edx, dword ptr ds : [public_6797b0]
        mov dword ptr ds : [public_6797c0], ecx
        mov dword ptr ds : [public_6797b4], edx
        mov dword ptr ds : [public_6797bc], ebx
        cmp byte ptr ds : [eax], bl
        je public_54c0f8
        push 0x84
        call public_4f79a0
        add esp, 4
        cmp eax, ebx
        je public_54c0a1
        push ebx
        mov ecx, eax
        call public_4f8060
        mov dword ptr ds : [public_6797bc], eax
        jmp public_54c0a7
        public_54c0a1 : nop
        mov dword ptr ds : [public_6797bc], ebx
        public_54c0a7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call ebp
        lea ecx, ss:[esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0x24], eax
        call public_40f080
        add esp, 8
        cmp eax, ebx
        je public_54c0d0
        mov ecx, dword ptr ds : [public_6797bc]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        jmp public_54c0f2
        public_54c0d0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x49
/*FIXUP push offset public_5e08c4 @0x54c0dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e08c4
        mov eax, 0x100001
/*FIXUP push offset public_5e0878 @0x54c0e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0878
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_54c0f2 : nop
        mov ecx, dword ptr ds : [public_6797c0]
        public_54c0f8 : nop
        cmp ecx, ebx
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_6797b0], eax
        je public_54c179
        fild dword ptr ds : [public_6797b4]
        fmul dword ptr ds : [public_5d3e94]
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ss : [esp+0x18]
        fmulp 
        fst dword ptr ss : [esp+0x1C]
        fcomp qword ptr ds : [public_5c75f0]
        fnstsw ax
        test ah, 0x41
        jp public_54c146
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [public_6797c0]
        call public_4f7a90
        mov dword ptr ds : [public_6797c0], ebx
        jmp public_54c179
        public_54c146 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        lea edi, ds:[ecx+0x10]
        mov ecx, 0xC
        lea esi, ss:[esp+0x2C]
        rep movsd
        mov ecx, dword ptr ds : [public_6797c0]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [public_6797c0]
        mov dl, byte ptr ds : [eax+8]
        or dl, 1
        mov ecx, eax
        mov byte ptr ds : [eax+8], dl
        call public_4f7af0
        public_54c179 : nop
        mov eax, dword ptr ds : [public_6797bc]
        cmp eax, ebx
        je public_54c222
        fild dword ptr ds : [public_6797b0]
        lea edi, ds:[eax+0x10]
        mov ecx, 0xC
        lea esi, ss:[esp+0x2C]
        fmul dword ptr ds : [public_5d3e94]
        rep movsd
        mov ecx, dword ptr ds : [public_6797bc]
        mov eax, dword ptr ds : [ecx]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [public_6797bc]
        mov dl, byte ptr ds : [eax+8]
        or dl, 1
        mov ecx, eax
        mov byte ptr ds : [eax+8], dl
        call public_4f7af0
        jmp public_54c222
        public_54c1cf : nop
        mov ecx, dword ptr ds : [public_6797c0]
        cmp ecx, ebx
        je public_54c1ef
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_6797c0]
        call public_4f7a90
        mov dword ptr ds : [public_6797c0], ebx
        public_54c1ef : nop
        mov ecx, dword ptr ds : [public_6797bc]
        cmp ecx, ebx
        je public_54c20f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [public_6797bc]
        call public_4f7a90
        mov dword ptr ds : [public_6797bc], ebx
        public_54c20f : nop
        mov ecx, offset public_679790
        call esi
        mov dword ptr ds : [public_6797b0], ebx
        mov dword ptr ds : [public_6797b4], ebx
        public_54c222 : nop
        mov eax, dword ptr ds : [public_6797b8]
        cmp eax, ebx
        je public_54c290
        fld dword ptr ds : [public_614080]
        lea edi, ds:[eax+0x10]
        fsubr qword ptr ds : [public_5c89b8]
        mov ecx, 0xC
        fimul dword ptr ds : [public_6797ac]
        lea esi, ss:[esp+0x2C]
        fild dword ptr ds : [public_6797a8]
        fmul dword ptr ds : [public_614080]
        rep movsd
        faddp 
        mov ecx, dword ptr ds : [public_6797b8]
        mov eax, dword ptr ds : [ecx]
        fmul qword ptr ds : [public_5e08f8]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [public_6797b8]
        mov dl, byte ptr ds : [eax+8]
        or dl, 1
        mov ecx, eax
        mov byte ptr ds : [eax+8], dl
        call public_4f7af0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x7C
        ret 
        public_54c290 : nop
        mov eax, dword ptr ds : [public_679794]
        cmp byte ptr ds : [eax], bl
        je public_54c314
        push 0x84
        call public_4f79a0
        add esp, 4
        cmp eax, ebx
        je public_54c2b9
        push ebx
        mov ecx, eax
        call public_4f8060
        mov dword ptr ds : [public_6797b8], eax
        jmp public_54c2bf
        public_54c2b9 : nop
        mov dword ptr ds : [public_6797b8], ebx
        public_54c2bf : nop
        mov ecx, dword ptr ds : [public_679794]
        push ecx
        call ebp
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x24], eax
        call public_40f080
        add esp, 8
        cmp eax, ebx
        je public_54c2f0
        mov ecx, dword ptr ds : [public_6797b8]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x7C
        ret 
        public_54c2f0 : nop
        mov ecx, dword ptr ds : [public_679794]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x49
/*FIXUP push offset public_5e08c4 @0x54c2ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e08c4
        mov eax, 0x100001
/*FIXUP push offset public_5e0878 @0x54c309*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0878
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_54c314 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x7C
        ret 
        UNREACHABLE_TRAP(0x54beb0)
    }
}

#undef public_54bee5
#undef public_54bf1c
#undef public_54c00d
#undef public_54c01b
#undef public_54c02a
#undef public_54c05f
#undef public_54c0a1
#undef public_54c0a7
#undef public_54c0d0
#undef public_54c0f2
#undef public_54c0f8
#undef public_54c146
#undef public_54c179
#undef public_54c1cf
#undef public_54c1ef
#undef public_54c20f
#undef public_54c222
#undef public_54c290
#undef public_54c2b9
#undef public_54c2bf
#undef public_54c2f0
#undef public_54c314
