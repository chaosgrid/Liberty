#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4121d0);
CLANG_FORWARD_PROC_SYMBOL(public_4122a0);
CLANG_FORWARD_PROC_SYMBOL(public_428f80);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_503cd0);
CLANG_FORWARD_PROC_SYMBOL(public_52efb0);
CLANG_FORWARD_PROC_SYMBOL(public_52f110);
CLANG_FORWARD_PROC_SYMBOL(public_534010);
CLANG_FORWARD_PROC_SYMBOL(public_5437d0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_54508c _public_54508c
#define public_54508e _public_54508e
#define public_5450ba _public_5450ba
#define public_5450e7 _public_5450e7
#define public_5450e9 _public_5450e9
#define public_5450ef _public_5450ef
#define public_545109 _public_545109
#define public_545110 _public_545110
#define public_545131 _public_545131
#define public_545150 _public_545150
#define public_545196 _public_545196
#define public_5451b2 _public_5451b2
#define public_5451b4 _public_5451b4
#define public_5451cf _public_5451cf
#define public_5451d9 _public_5451d9
#define public_545216 _public_545216
#define public_54527e _public_54527e
#define public_545295 _public_545295
#define public_5452b3 _public_5452b3
#define public_545309 _public_545309
#define public_54532a _public_54532a
#define public_545341 _public_545341
#define public_545359 _public_545359
#define public_545360 _public_545360
#define public_545374 _public_545374
#define public_54539a _public_54539a
#define public_5453b3 _public_5453b3
#define public_5453c8 _public_5453c8
#define public_545494 _public_545494
#define public_5454d2 _public_5454d2
#define public_5454f6 _public_5454f6
#define public_54550d _public_54550d
#define public_545516 _public_545516
#define public_54554d _public_54554d
#define public_54554f _public_54554f
#define public_545555 _public_545555
#define public_54556c _public_54556c
#define public_54558f _public_54558f

PROC_DECLARE(0x545050, internal_545050, public_545050);
extern "C" NAKED register_t __cdecl internal_545050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x44
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x158]
        test al, al
        jne public_54558f
        push ebx
        lea ebx, ds:[esi+0xC]
        test ebx, ebx
        push ebp
        push edi
        je public_54508c
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_54508c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_54508c
        mov ebp, eax
        jmp public_54508e
        public_54508c : nop
        xor ebp, ebp
        public_54508e : nop
        mov dword ptr ss : [esp+0x10], ebp
        call public_54baf0
        cmp esi, eax
        jne public_5450ef
        mov al, byte ptr ds : [public_678b0c]
        test al, 1
        jne public_5450ba
        or al, 1
        push 0x37
        mov byte ptr ds : [public_678b0c], al
        call public_5792b0
        add esp, 4
        mov dword ptr ds : [public_678b08], eax
        public_5450ba : nop
        push 0x37
        call public_5792b0
        mov ecx, dword ptr ds : [public_678b08]
        add esp, 4
        cmp ecx, eax
        je public_5450ef
        push 0x37
        call public_5792b0
        add esp, 4
        test eax, eax
        mov dword ptr ds : [public_678b08], eax
        mov ecx, ebp
        je public_5450e7
        push 0
        jmp public_5450e9
        public_5450e7 : nop
        push 1
        public_5450e9 : nop
        call dword ptr ds : [public_5c65c4]
        public_5450ef : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_545109
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_545109
        mov edi, dword ptr ds : [eax+0xB4]
        jmp public_545110
        public_545109 : nop
        call public_54bb00
        mov edi, eax
        public_545110 : nop
        call public_54bb00
        cmp edi, eax
        jne public_545131
        mov ecx, dword ptr ds : [public_5c6918]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [ebp]
        push edx
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x50]
        jmp public_545150
        public_545131 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_545150
        mov eax, dword ptr ds : [public_5c6914]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [ebp]
        push ecx
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x50]
        public_545150 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        push ecx
        mov ecx, esi
        call public_534010
        fld dword ptr ds : [esi+0xE4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_5451d9
        fld dword ptr ds : [esi+0xE4]
        fsub dword ptr ss : [esp+0x58]
        fst dword ptr ds : [esi+0xE4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_5451d9
        mov eax, dword ptr ds : [esi+0xE8]
        test eax, eax
        jle public_5451cf
        public_545196 : nop
        test ebx, ebx
        je public_5451b2
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_5451b2
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_5451b4
        public_5451b2 : nop
        xor ecx, ecx
        public_5451b4 : nop
        call dword ptr ds : [public_5c6af0]
        fstp st(0)
        mov ecx, dword ptr ds : [esi+0xE8]
        dec ecx
        mov eax, ecx
        test eax, eax
        mov dword ptr ds : [esi+0xE8], ecx
        jg public_545196
        public_5451cf : nop
        mov dword ptr ds : [esi+0xE4], 0
        public_5451d9 : nop
        mov eax, dword ptr ds : [esi+0x158]
        test eax, eax
        je public_545374
        mov ecx, dword ptr ds : [esi+0x188]
        test ecx, ecx
        je public_545374
        fld dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_5d3ee0]
        mov dword ptr ss : [esp+0x14], eax
        fnstsw ax
        test ah, 0x41
        jne public_545216
        mov dword ptr ss : [esp+0x14], 0x3DCCCCCD
        public_545216 : nop
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [ecx+0x70]
        fstp dword ptr ds : [ecx+0x70]
        mov al, byte ptr ds : [public_613f58]
        test al, al
        je public_54527e
        cmp dword ptr ds : [esi+0x158], 2
        jne public_54527e
        mov eax, dword ptr ds : [esi+0x188]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [eax+0x70]
        fcomp dword ptr ds : [public_613f5c]
        fnstsw ax
        test ah, 0x41
        jp public_54527e
        mov ecx, dword ptr ds : [public_613f5c]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov byte ptr ds : [public_613f58], 0
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        call public_4122a0
        add esp, 8
        public_54527e : nop
        mov eax, dword ptr ds : [esi+0x158]
        dec eax
        cmp eax, 4
        ja public_545360
/*FIXUP jmp dword ptr ds : [eax*4+public_545598] @0x54528e*/
  JMPTB cmp eax, 0
  JMPTB je public_545295
  JMPTB cmp eax, 1
  JMPTB je public_5452b3
  JMPTB cmp eax, 2
  JMPTB je public_545309
  JMPTB cmp eax, 3
  JMPTB je public_54532a
  JMPTB cmp eax, 4
  JMPTB je public_545341
  JMPTB int 3
        public_545295 : nop
        mov eax, dword ptr ds : [esi+0x188]
        fld dword ptr ds : [eax+4]
        fcomp dword ptr ds : [eax+0x70]
        fnstsw ax
        test ah, 5
        jp public_545360
        push 2
        jmp public_545359
        public_5452b3 : nop
        mov eax, dword ptr ds : [esi+0x188]
        fld dword ptr ds : [eax+8]
        fcomp dword ptr ds : [eax+0x70]
        fnstsw ax
        test ah, 5
        jp public_545360
        push 3
        mov ecx, esi
        mov byte ptr ds : [public_613f58], 1
        call public_5437d0
        mov eax, dword ptr ds : [public_613f60]
        push 1
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        call public_4121d0
        add esp, 0xC
        jmp public_545360
        public_545309 : nop
        mov eax, dword ptr ds : [esi+0x188]
        fld dword ptr ds : [eax+0xC]
        fcomp dword ptr ds : [eax+0x70]
        fnstsw ax
        test ah, 5
        jp public_545360
        mov al, byte ptr ds : [esi+0x15C]
        test al, al
        je public_545360
        push 4
        jmp public_545359
        public_54532a : nop
        mov eax, dword ptr ds : [esi+0x188]
        fld dword ptr ds : [eax+0x10]
        fcomp dword ptr ds : [eax+0x70]
        fnstsw ax
        test ah, 5
        jp public_545360
        push 5
        jmp public_545359
        public_545341 : nop
        mov edx, dword ptr ds : [esi+0x188]
        fld dword ptr ds : [edx+0x70]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_545360
        push 0
        public_545359 : nop
        mov ecx, esi
        call public_5437d0
        public_545360 : nop
        mov ecx, dword ptr ds : [esi+0x188]
        test ecx, ecx
        je public_545374
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_503cd0
        public_545374 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call dword ptr ds : [public_5c65b8]
        lea edi, ds:[esi+0xF4]
        mov bl, al
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        test eax, eax
        je public_54539a
        test byte ptr ds : [eax+8], 2
        je public_5454f6
        public_54539a : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_5453b3
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x14]
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_5454f6
        public_5453b3 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_5453c8
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        je public_5454f6
        public_5453c8 : nop
        test bl, bl
        je public_545516
        mov eax, dword ptr ss : [ebp+0x218]
        test eax, eax
        je public_545516
        test byte ptr ds : [esi+0x18C], 8
        jne public_545516
/*FIXUP push offset public_5dffe4 @0x5453eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dffe4
        call dword ptr ds : [public_5c6020]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        call dword ptr ds : [eax+0x1C]
        lea ecx, ss:[esp+0x14]
        mov ebp, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_545494
        push edi
        lea ecx, ss:[esp+0x28]
        push ecx
        push ebp
        lea edx, ss:[esp+0x20]
        push esi
        push edx
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        public_545494 : nop
        call public_54baf0
        cmp esi, eax
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_545516
        mov eax, dword ptr ss : [ebp+0x218]
        mov eax, dword ptr ds : [eax+0xE0]
        test al, 4
        je public_5454d2
        mov ecx, dword ptr ds : [public_678b48]
        push 0
        push ecx
        call public_489e80
        mov edx, dword ptr ds : [public_678b44]
        push 0
        push edx
        call public_489e80
        add esp, 0x10
        jmp public_545516
        public_5454d2 : nop
        test al, 2
        je public_545516
        mov eax, dword ptr ds : [public_678b48]
        push 0
        push eax
        call public_489e80
        mov ecx, dword ptr ds : [public_678b40]
        push 0
        push ecx
        call public_489e80
        add esp, 0x10
        jmp public_545516
        public_5454f6 : nop
        test bl, bl
        je public_54550d
        mov eax, dword ptr ss : [ebp+0x218]
        test eax, eax
        je public_54550d
        test byte ptr ds : [esi+0x18C], 8
        je public_545516
        public_54550d : nop
        push edi
        lea ecx, ds:[esi+0x28]
        call public_4fcef0
        public_545516 : nop
        mov eax, dword ptr ds : [esi+0xF0]
        test eax, eax
        jne public_545555
        push 0x400
        lea ecx, ss:[ebp+0xE4]
        call dword ptr ds : [public_5c649c]
        test eax, eax
        je public_545555
        push 0x50
        call public_428f80
        add esp, 4
        test eax, eax
        je public_54554d
        push esi
        mov ecx, eax
        call public_52efb0
        jmp public_54554f
        public_54554d : nop
        xor eax, eax
        public_54554f : nop
        mov dword ptr ds : [esi+0xF0], eax
        public_545555 : nop
        mov ecx, dword ptr ds : [esi+0xF0]
        test ecx, ecx
        pop edi
        pop ebp
        pop ebx
        je public_54556c
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        call public_52f110
        public_54556c : nop
        fld dword ptr ds : [esi+0x150]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_54558f
        fld dword ptr ds : [esi+0x150]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ds : [esi+0x150]
        public_54558f : nop
        pop esi
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x545050)
        ASM_EXPORT_ENTRY_SINGLE(0x545341, public_545341)
    }
}

#undef public_54508c
#undef public_54508e
#undef public_5450ba
#undef public_5450e7
#undef public_5450e9
#undef public_5450ef
#undef public_545109
#undef public_545110
#undef public_545131
#undef public_545150
#undef public_545196
#undef public_5451b2
#undef public_5451b4
#undef public_5451cf
#undef public_5451d9
#undef public_545216
#undef public_54527e
#undef public_545295
#undef public_5452b3
#undef public_545309
#undef public_54532a
#undef public_545341
#undef public_545359
#undef public_545360
#undef public_545374
#undef public_54539a
#undef public_5453b3
#undef public_5453c8
#undef public_545494
#undef public_5454d2
#undef public_5454f6
#undef public_54550d
#undef public_545516
#undef public_54554d
#undef public_54554f
#undef public_545555
#undef public_54556c
#undef public_54558f

#pragma init_seg(compiler)
extern "C" void const* const public_545341 = __AsmFindLabelExport(&internal_545050, 0x545341);
