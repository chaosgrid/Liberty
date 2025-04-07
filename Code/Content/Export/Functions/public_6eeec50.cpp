#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1220);
CLANG_FORWARD_PROC_SYMBOL(public_6ea1880);
CLANG_FORWARD_PROC_SYMBOL(public_6ea1f50);
CLANG_FORWARD_PROC_SYMBOL(public_6ea2760);
CLANG_FORWARD_PROC_SYMBOL(public_6ea2be0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea3060);
CLANG_FORWARD_PROC_SYMBOL(public_6ea34e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea3960);
CLANG_FORWARD_PROC_SYMBOL(public_6ea3de0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea4260);
CLANG_FORWARD_PROC_SYMBOL(public_6ea46e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea4b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ea4fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea5460);
CLANG_FORWARD_PROC_SYMBOL(public_6ea58e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea5e10);
CLANG_FORWARD_PROC_SYMBOL(public_6ea6ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2870);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6eef3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6efeb10);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a550);
CLANG_FORWARD_PROC_SYMBOL(public_6f5cd10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eeec92 _public_6eeec92
#define public_6eeecc5 _public_6eeecc5
#define public_6eeecf8 _public_6eeecf8
#define public_6eeed33 _public_6eeed33
#define public_6eeed66 _public_6eeed66
#define public_6eeed99 _public_6eeed99
#define public_6eeedd1 _public_6eeedd1
#define public_6eeee09 _public_6eeee09
#define public_6eeee44 _public_6eeee44
#define public_6eeee7f _public_6eeee7f
#define public_6eeeeba _public_6eeeeba
#define public_6eeeef5 _public_6eeeef5
#define public_6eeef30 _public_6eeef30
#define public_6eeef6b _public_6eeef6b
#define public_6eeefa6 _public_6eeefa6
#define public_6eeefe1 _public_6eeefe1
#define public_6eef01c _public_6eef01c
#define public_6eef057 _public_6eef057
#define public_6eef092 _public_6eef092
#define public_6eef0cd _public_6eef0cd
#define public_6eef108 _public_6eef108
#define public_6eef13f _public_6eef13f
#define public_6eef176 _public_6eef176
#define public_6eef17a _public_6eef17a

PROC_DECLARE(0x6eeec50, internal_6eeec50, public_6eeec50);
extern "C" NAKED register_t __cdecl internal_6eeec50()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3294]
/*FIXUP push offset public_6fb7d64 @0x6eeec5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d64
        push esi
        xor ebx, ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeec92
        push 8
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, eax
        call public_6efeb10
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
/*FIXUP public_6eeec92 : nop
        push offset public_6fbbba0 @0x6eeec92*/
  FIXUP public_6eeec92 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbba0
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeecc5
        push 4
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov ecx, eax
        call public_6f5cd10
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
/*FIXUP public_6eeecc5 : nop
        push offset public_6fb4564 @0x6eeecc5*/
  FIXUP public_6eeecc5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4564
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeecf8
        push 8
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, eax
        call public_6eb4ad0
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
/*FIXUP public_6eeecf8 : nop
        push offset public_6fb75f4 @0x6eeecf8*/
  FIXUP public_6eeecf8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75f4
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeed33
        push 0x29C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, eax
        call public_6eef3d0
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
/*FIXUP public_6eeed33 : nop
        push offset public_6fbbb40 @0x6eeed33*/
  FIXUP public_6eeed33 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb40
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeed66
        push 8
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, eax
        call public_6f5a550
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
/*FIXUP public_6eeed66 : nop
        push offset public_6fb4544 @0x6eeed66*/
  FIXUP public_6eeed66 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4544
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeed99
        push 0x1C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, eax
        call public_6eb2870
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eeed99 : nop
        push esi
/*FIXUP push offset public_6fb438c @0x6eeed9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb438c
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeedd1
        push 8
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, eax
        call public_6ea6ff0
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eeedd1 : nop
        push esi
/*FIXUP push offset public_6fb4258 @0x6eeedd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4258
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeee09
        push 0x3C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, eax
        call public_6ea5e10
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eeee09 : nop
        push esi
/*FIXUP push offset public_6fb3864 @0x6eeee0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3864
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeee44
        push 0x440
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea1880
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eeee44 : nop
        push esi
/*FIXUP push offset public_6fb3970 @0x6eeee45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3970
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeee7f
        push 0x330
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea1f50
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eeee7f : nop
        push esi
/*FIXUP push offset public_6fb3a94 @0x6eeee80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3a94
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeeeba
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea2760
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eeeeba : nop
        push esi
/*FIXUP push offset public_6fb3b34 @0x6eeeebb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3b34
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeeef5
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea2be0
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eeeef5 : nop
        push esi
/*FIXUP push offset public_6fb3bd4 @0x6eeeef6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3bd4
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeef30
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea3060
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eeef30 : nop
        push esi
/*FIXUP push offset public_6fb3c74 @0x6eeef31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3c74
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeef6b
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea34e0
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eeef6b : nop
        push esi
/*FIXUP push offset public_6fb3d14 @0x6eeef6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3d14
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeefa6
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea3960
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eeefa6 : nop
        push esi
/*FIXUP push offset public_6fb3db4 @0x6eeefa7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3db4
        call edi
        add esp, 8
        test eax, eax
        jne public_6eeefe1
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea3de0
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eeefe1 : nop
        push esi
/*FIXUP push offset public_6fb3e54 @0x6eeefe2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3e54
        call edi
        add esp, 8
        test eax, eax
        jne public_6eef01c
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea4260
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eef01c : nop
        push esi
/*FIXUP push offset public_6fb3ef4 @0x6eef01d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3ef4
        call edi
        add esp, 8
        test eax, eax
        jne public_6eef057
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea46e0
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eef057 : nop
        push esi
/*FIXUP push offset public_6fb3f94 @0x6eef058*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3f94
        call edi
        add esp, 8
        test eax, eax
        jne public_6eef092
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea4b60
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eef092 : nop
        push esi
/*FIXUP push offset public_6fb4034 @0x6eef093*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4034
        call edi
        add esp, 8
        test eax, eax
        jne public_6eef0cd
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea4fe0
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eef0cd : nop
        push esi
/*FIXUP push offset public_6fb40d4 @0x6eef0ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb40d4
        call edi
        add esp, 8
        test eax, eax
        jne public_6eef108
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea5460
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eef108 : nop
        push esi
/*FIXUP push offset public_6fb4174 @0x6eef109*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4174
        call edi
        add esp, 8
        test eax, eax
        jne public_6eef13f
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea58e0
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eef13f : nop
        push esi
/*FIXUP push offset public_6fb36dc @0x6eef140*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36dc
        call edi
        add esp, 8
        test eax, eax
        jne public_6eef17a
        push 0x32C
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6eef176
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_6ea1220
        pop edi
        pop esi
        mov ebx, eax
        pop ebx
        ret 
        public_6eef176 : nop
        xor eax, eax
        mov ebx, eax
        public_6eef17a : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eeec50)
    }
}

#undef public_6eeec92
#undef public_6eeecc5
#undef public_6eeecf8
#undef public_6eeed33
#undef public_6eeed66
#undef public_6eeed99
#undef public_6eeedd1
#undef public_6eeee09
#undef public_6eeee44
#undef public_6eeee7f
#undef public_6eeeeba
#undef public_6eeeef5
#undef public_6eeef30
#undef public_6eeef6b
#undef public_6eeefa6
#undef public_6eeefe1
#undef public_6eef01c
#undef public_6eef057
#undef public_6eef092
#undef public_6eef0cd
#undef public_6eef108
#undef public_6eef13f
#undef public_6eef176
#undef public_6eef17a
