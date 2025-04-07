#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401f00);
CLANG_FORWARD_PROC_SYMBOL(public_4031c0);
CLANG_FORWARD_PROC_SYMBOL(public_40c920);
CLANG_FORWARD_PROC_SYMBOL(public_40d980);
CLANG_FORWARD_PROC_SYMBOL(public_40da10);
CLANG_FORWARD_PROC_SYMBOL(public_40e160);
CLANG_FORWARD_PROC_SYMBOL(public_4135a0);
CLANG_FORWARD_PROC_SYMBOL(public_4188a6);
CLANG_FORWARD_PROC_SYMBOL(public_4188ac);
CLANG_FORWARD_PROC_SYMBOL(public_418912);
CLANG_FORWARD_PROC_SYMBOL(public_418948);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_PROC_SYMBOL(public_418c9c);
CLANG_FORWARD_PROC_SYMBOL(public_418ca2);
CLANG_FORWARD_PROC_SYMBOL(public_418d80);
CLANG_FORWARD_PROC_SYMBOL(public_419460);
CLANG_FORWARD_PROC_SYMBOL(public_4194ae);
CLANG_FORWARD_JUMP_SYMBOL(public_41a0bb);

#define public_40ca3a _public_40ca3a
#define public_40ca47 _public_40ca47
#define public_40ca84 _public_40ca84
#define public_40ca97 _public_40ca97
#define public_40cae4 _public_40cae4
#define public_40cb2c _public_40cb2c
#define public_40cb57 _public_40cb57
#define public_40cb60 _public_40cb60
#define public_40cbc3 _public_40cbc3
#define public_40cbf4 _public_40cbf4
#define public_40cc32 _public_40cc32
#define public_40cc50 _public_40cc50
#define public_40cc70 _public_40cc70
#define public_40cc92 _public_40cc92
#define public_40cca9 _public_40cca9
#define public_40cd2d _public_40cd2d
#define public_40cd3a _public_40cd3a
#define public_40cd47 _public_40cd47
#define public_40cd4d _public_40cd4d

PROC_DECLARE(0x40c920, internal_40c920, public_40c920);
extern "C" NAKED register_t __cdecl internal_40c920()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_41a0bb @0x40c928*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a0bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, 0x2C74
        call public_419460
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_41bc2c]
        mov dword ptr ss : [esp+0x2C], eax
        mov al, byte ptr ds : [public_42621c]
        mov byte ptr ss : [esp+0x80], al
        xor eax, eax
        mov ecx, 0xFF
        lea edi, ss:[esp+0x81]
        rep stosd
        stosw 
/*FIXUP push offset public_425570 @0x40c974*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425570
        lea ecx, ss:[esp+0x84]
        push ecx
        mov ecx, dword ptr ds : [public_41baf8]
        stosb 
        call public_418912
        lea edx, ss:[esp+0x80]
/*FIXUP push offset public_425468 @0x40c994*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425468
        push edx
        call dword ptr ds : [public_41b978]
        mov esi, eax
        add esp, 8
        cmp esi, ebx
        je public_40ca47
        mov ax, word ptr ds : [public_425f48]
        mov word ptr ss : [esp+0x480], ax
        xor eax, eax
        mov ecx, 0x9FF
        lea edi, ss:[esp+0x482]
        rep stosd
        push esi
        push 1
        lea ecx, ss:[esp+0x488]
        push 0x2800
        stosw 
        push ecx
        mov word ptr ss : [esp+0x2C8E], bx
        call dword ptr ds : [public_41b974]
        push esi
        call dword ptr ds : [public_41b970]
        lea edx, ss:[esp+0x494]
        push edx
        call dword ptr ds : [public_41b8f4]
        add esp, 0x18
        mov esi, eax
        push 1
        push esi
        mov ecx, offset public_4277ec
        call dword ptr ds : [public_41b878]
        test al, al
        je public_40ca3a
        mov eax, dword ptr ds : [public_4277f0]
        push esi
        lea ecx, ss:[esp+0x484]
        push ecx
        push eax
        call public_4031c0
        add esp, 0xC
        push esi
        mov ecx, offset public_4277ec
        call dword ptr ds : [public_41b8c4]
/*FIXUP public_40ca3a : nop
        push offset public_4277ec @0x40ca3a*/
  FIXUP public_40ca3a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_4277ec
        call public_4135a0
        add esp, 4
        public_40ca47 : nop
        mov eax, dword ptr ds : [public_427828]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], ebx
        je public_40cb2c
        mov cl, byte ptr ds : [eax+0xA79]
        test cl, cl
        je public_40ca84
        call dword ptr ds : [public_41b9a0]
        push ebx
        push ebx
        call dword ptr ds : [public_41b99c]
        and eax, 0xFFFFFFE3
        push 0x8001F
        push eax
        call dword ptr ds : [public_41b998]
        add esp, 0x10
        jmp public_40ca97
        public_40ca84 : nop
        push 0xFFFFF
        push 0x9001F
        call dword ptr ds : [public_41b998]
        add esp, 8
        public_40ca97 : nop
        mov eax, dword ptr ds : [public_427828]
        mov esi, dword ptr ds : [eax+0x84C]
        push 4
        lea ecx, ds:[eax+0xCC]
        call public_401f00
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        push 0xF011
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x2C90], ebx
        call public_418ca2
        test eax, eax
        setne al
        test al, al
        jne public_40cae4
/*FIXUP push offset public_42557c @0x40cad6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42557c
        lea ecx, ss:[esp+0x14]
        call public_418c9c
        public_40cae4 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, 0x100004
        push edx
        push eax
        call public_40e160
        mov eax, dword ptr ds : [public_427828]
        add esp, 8
        push esi
        lea ecx, ds:[eax+0xCC]
        call public_401f00
        mov ecx, dword ptr ds : [public_427828]
        mov edx, dword ptr ds : [ecx+0xB98]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x2C8C], 0xFFFFFFFF
        call public_418aa4
        public_40cb2c : nop
        call dword ptr ds : [public_41b08c]
        mov ebx, eax
        mov dword ptr ss : [esp+0x24], edx
        call dword ptr ds : [public_41bc20]
        push eax
        call dword ptr ds : [public_41b9ac]
        mov eax, dword ptr ds : [public_427824]
        add esp, 4
        test eax, eax
        je public_40cd3a
        jmp public_40cb60
        public_40cb57 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        nop 
        lea esp, ss:[esp]
        public_40cb60 : nop
        call dword ptr ds : [public_41b08c]
        mov edi, edx
        mov edx, dword ptr ss : [esp+0x24]
        mov esi, eax
        sub eax, ebx
        mov ecx, edi
        sbb ecx, edx
        lea edx, ss:[esp+0x30]
        push edx
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ecx
        call dword ptr ds : [public_41b0a0]
        fst qword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_425548]
        mov ebx, dword ptr ss : [esp+0x20]
        fld st(1)
        add esp, 4
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_40cbc3
        fld dword ptr ds : [public_425548]
        push 0
        fsub st, st(1)
        fmul qword ptr ds : [public_41d2a8]
        call public_4194ae
        fstp st(0)
        push eax
        call dword ptr ds : [public_41b14c]
        jmp public_40cbf4
        public_40cbc3 : nop
        fld dword ptr ds : [public_42554c]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_40cbf4
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [public_427838]
        push ebx
        push ecx
        push edx
        mov eax, 0x100004
/*FIXUP push offset public_4257e8 @0x40cbe6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4257e8
        push eax
        call public_40e160
        add esp, 0x14
        public_40cbf4 : nop
        call dword ptr ds : [public_41bc20]
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_41b014]
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_41b098]
        fstp st(0)
        call dword ptr ds : [public_41b198]
        cmp eax, dword ptr ds : [public_427820]
        jne public_40cc32
        mov eax, dword ptr ds : [public_42780c]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_41b1b4]
        jmp public_40cca9
        public_40cc32 : nop
        mov edi, dword ptr ds : [public_41bbf4]
        push 0xBF
        push 0xFFFFFFFF
        push 0
/*FIXUP push offset public_42780c @0x40cc41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42780c
        push 1
        call edi
        cmp eax, 1
        jne public_40cca9
        nop 
        public_40cc50 : nop
        mov esi, dword ptr ds : [public_41bc04]
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x48]
        push ecx
        call esi
        test eax, eax
        je public_40cc92
        lea esp, ss:[esp]
        public_40cc70 : nop
        call public_418d80
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x64]
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x48]
        push eax
        call esi
        test eax, eax
        jne public_40cc70
        public_40cc92 : nop
        push 0xBF
        push 0xFFFFFFFF
        push 0
/*FIXUP push offset public_42780c @0x40cc9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42780c
        push 1
        call edi
        cmp eax, 1
        je public_40cc50
        public_40cca9 : nop
        mov ecx, dword ptr ds : [public_41bb70]
        call public_4188ac
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push ecx
        call dword ptr ds : [public_41b010]
        fld qword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [public_41bb70]
        fstp dword ptr ss : [esp+4]
        add esp, 4
        call public_4188a6
        mov edx, dword ptr ds : [public_42780c]
        push edx
        call dword ptr ds : [public_41b1a4]
        call dword ptr ds : [public_41b098]
        fstp st(0)
        inc dword ptr ds : [public_427838]
        call dword ptr ds : [public_41b074]
        call dword ptr ds : [public_41bc20]
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        je public_40cd2d
        sub eax, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, esi
        call public_40d980
        mov ecx, dword ptr ds : [public_41bb70]
        lea eax, ss:[esp+0x54]
        push eax
        call public_418948
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, esi
        call public_40da10
        public_40cd2d : nop
        mov eax, dword ptr ds : [public_427824]
        test eax, eax
        jne public_40cb57
        public_40cd3a : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        je public_40cd47
        cmp eax, 1
        jne public_40cd4d
        public_40cd47 : nop
        call dword ptr ds : [public_41bc28]
        public_40cd4d : nop
        mov ecx, dword ptr ss : [esp+0x2C84]
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x40c920)
    }
}

#undef public_40ca3a
#undef public_40ca47
#undef public_40ca84
#undef public_40ca97
#undef public_40cae4
#undef public_40cb2c
#undef public_40cb57
#undef public_40cb60
#undef public_40cbc3
#undef public_40cbf4
#undef public_40cc32
#undef public_40cc50
#undef public_40cc70
#undef public_40cc92
#undef public_40cca9
#undef public_40cd2d
#undef public_40cd3a
#undef public_40cd47
#undef public_40cd4d
