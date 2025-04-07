#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea8d40);
CLANG_FORWARD_PROC_SYMBOL(public_6ea8d50);
CLANG_FORWARD_PROC_SYMBOL(public_6ea95e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eab1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac110);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3390);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4a00);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5380);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5630);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5660);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5910);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5940);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5b50);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f00b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f047e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f04a40);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f47990);
CLANG_FORWARD_PROC_SYMBOL(public_6f487d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f488b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48db0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa241);

#define public_6eb4cb7 _public_6eb4cb7
#define public_6eb4d00 _public_6eb4d00
#define public_6eb4d27 _public_6eb4d27
#define public_6eb4d73 _public_6eb4d73
#define public_6eb4d87 _public_6eb4d87
#define public_6eb4dbc _public_6eb4dbc
#define public_6eb4dbd _public_6eb4dbd
#define public_6eb4dd6 _public_6eb4dd6
#define public_6eb4de2 _public_6eb4de2
#define public_6eb4e54 _public_6eb4e54
#define public_6eb4e70 _public_6eb4e70
#define public_6eb4ebd _public_6eb4ebd
#define public_6eb4ecf _public_6eb4ecf
#define public_6eb4f5d _public_6eb4f5d
#define public_6eb4fc0 _public_6eb4fc0
#define public_6eb4fe7 _public_6eb4fe7
#define public_6eb5060 _public_6eb5060
#define public_6eb5087 _public_6eb5087
#define public_6eb50e0 _public_6eb50e0
#define public_6eb50f0 _public_6eb50f0
#define public_6eb51e7 _public_6eb51e7
#define public_6eb5202 _public_6eb5202
#define public_6eb5206 _public_6eb5206
#define public_6eb5263 _public_6eb5263
#define public_6eb527d _public_6eb527d
#define public_6eb52b3 _public_6eb52b3
#define public_6eb5307 _public_6eb5307
#define public_6eb530e _public_6eb530e
#define public_6eb5319 _public_6eb5319
#define public_6eb5350 _public_6eb5350
#define public_6eb5362 _public_6eb5362

PROC_DECLARE(0x6eb4ba0, internal_6eb4ba0, public_6eb4ba0);
extern "C" NAKED register_t __cdecl internal_6eb4ba0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faa241 @0x6eb4ba8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa241
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x90
        cmp eax, 0x29
        push ebx
        push ebp
        push esi
        push edi
        jg public_6eb4fe7
        je public_6eb4f5d
        dec eax
        je public_6eb4de2
        dec eax
        je public_6eb4d27
        sub eax, 0x19
        jne public_6eb5362
        mov ebx, dword ptr ss : [esp+0xB4]
        lea ebp, ds:[ebx+4]
        push ebp
        call public_6f49b00
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6eb5362
        mov ecx, esi
        call public_6f47980
        mov edi, eax
        test edi, edi
        je public_6eb5362
        mov eax, dword ptr ds : [ebx]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6ea95e0
        test al, al
        je public_6eb5362
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x54]
        mov edx, dword ptr ds : [edi+0x48]
        push ecx
        push edx
        mov ecx, esi
        call public_6f48ca0
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+8]
        call public_6ea7ee0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+0x5C]
        add ecx, 0x5C
        cmp eax, 3
        jne public_6eb4cb7
        call public_6ea8d40
        push eax
        mov ecx, esi
        call public_6f48db0
        mov edx, dword ptr ss : [ebp]
        xor eax, eax
        mov dword ptr ss : [esp+0x48], eax
        mov byte ptr ss : [esp+0x4C], al
        mov eax, dword ptr ss : [esp+0x18]
        add eax, 0x28
        push eax
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x48], edx
        call public_6ead6c0
        lea ecx, ss:[esp+0x44]
        push ecx
        push 0x100D
/*FIXUP push offset public_6fb4554 @0x6eb4c9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4554
        call public_6f24070
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push esi
        call public_6eb4a00
        add esp, 0x14
        jmp public_6eb5362
        public_6eb4cb7 : nop
        mov ecx, esi
        call public_6f47980
        mov edi, eax
        test edi, edi
        je public_6eb5362
        mov ecx, esi
        call public_6f47990
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6eac110
        mov esi, eax
        test esi, esi
        je public_6eb5362
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6eb5362
        lea ebx, ds:[ebx]
        public_6eb4d00 : nop
        push eax
        call public_6f00b60
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x10]
        jne public_6eb4d00
        jmp public_6eb5362
        public_6eb4d27 : nop
        mov esi, dword ptr ss : [esp+0xB4]
        lea ebp, ds:[esi+4]
        push ebp
        call public_6f49b00
        push esi
        call public_6eac0c0
        add esp, 8
        push ebp
        lea edx, ss:[esp+0x1C]
        mov ebx, eax
        push edx
        mov ecx, offset public_6fcef10
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [public_6fcef14]
        je public_6eb4dbc
        mov esi, dword ptr ds : [eax+0x14]
        lea edi, ds:[eax+0x10]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eb4d87
        mov ebx, dword ptr ds : [public_6fb367c]
        public_6eb4d73 : nop
        push esi
        call ebx
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        add esp, 4
        cmp esi, eax
        jne public_6eb4d73
        mov ebx, dword ptr ss : [esp+0x14]
        public_6eb4d87 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        push ecx
        mov ecx, edi
        call public_6eb5910
        mov edx, dword ptr ss : [esp+0x18]
        add edx, 0x10
        push edx
        call public_6f04a40
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, offset public_6fcef10
        call public_6eb5b50
        jmp public_6eb4dbd
        public_6eb4dbc : nop
        int 3
        public_6eb4dbd : nop
        test ebx, ebx
        je public_6eb5362
        mov edx, dword ptr ss : [ebp]
        push edx
        call public_6eb3390
        add esp, 4
        test al, al
        je public_6eb4dd6
        int 3
        public_6eb4dd6 : nop
        mov ecx, ebx
        call public_6eab1c0
        jmp public_6eb5362
        public_6eb4de2 : nop
        mov esi, dword ptr ss : [esp+0xB4]
        lea ebp, ds:[esi+4]
        push ebp
        call public_6f49b00
        push esi
        mov ebx, eax
        call public_6eac0c0
        mov esi, eax
        lea eax, ss:[esp+0x1C]
        push eax
        push ebp
        call dword ptr ds : [public_6fb35ec]
        add esp, 0x10
        lea ecx, ss:[esp+0x32]
        push ecx
        lea ecx, ss:[esp+0x48]
        call public_6ead6a0
        lea edx, ss:[esp+0x33]
        push edx
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0xAC], 0
        call public_6eb5630
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        mov dword ptr ss : [esp+0xA8], 1
        je public_6eb4e54
        push ebx
        lea eax, ss:[esp+0x48]
        push eax
        push esi
        call public_6f047e0
        add esp, 0xC
        public_6eb4e54 : nop
        mov ecx, dword ptr ds : [esi+0x48]
        mov eax, dword ptr ds : [public_6fcef28]
        mov dword ptr ss : [esp+0x10], ecx
        cmp eax, dword ptr ds : [public_6fcef2c]
        je public_6eb4ecf
        lea esi, ds:[eax+0x10]
        nop 
        lea esp, ss:[esp]
        public_6eb4e70 : nop
        mov edi, dword ptr ds : [esi-8]
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[esi-0x10]
        call public_6eb5f30
        cmp eax, edi
        je public_6eb4ebd
        mov eax, dword ptr ds : [ebx+0xDC]
        cmp eax, dword ptr ds : [esi]
        jl public_6eb4ebd
        cmp eax, dword ptr ds : [esi+4]
        jg public_6eb4ebd
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x10]
        push eax
        mov dword ptr ds : [eax], ecx
        call dword ptr ds : [public_6fb3674]
        add esp, 4
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x4C]
        push edx
        push eax
        lea ecx, ss:[esp+0x4C]
        call public_6eb5770
        public_6eb4ebd : nop
        mov eax, dword ptr ds : [public_6fcef2c]
        add esi, 0x80
        lea ecx, ds:[esi-0x10]
        cmp ecx, eax
        jne public_6eb4e70
        public_6eb4ecf : nop
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x88]
        mov dword ptr ss : [esp+0x84], edx
        call public_6eb5660
        lea ecx, ss:[esp+0x80]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, offset public_6fcef10
        mov byte ptr ss : [esp+0xB0], 2
        call public_6eb5940
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6fa6e80
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0xA8], 1
        call public_6eb5380
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xA8], 3
        call public_6f15350
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xA8], 0xFFFFFFFF
        call public_6eec8d0
        jmp public_6eb5362
        public_6eb4f5d : nop
        mov edx, dword ptr ss : [esp+0xB4]
        add edx, 4
        push edx
        call public_6f49b00
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6eb5362
        mov ecx, esi
        call public_6f47980
        mov edi, eax
        test edi, edi
        je public_6eb5362
        mov ecx, esi
        call public_6f47990
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6eac110
        mov esi, eax
        test esi, esi
        je public_6eb5362
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6eb5362
        lea ecx, ds:[ecx]
        public_6eb4fc0 : nop
        push eax
        call public_6f00b60
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x10]
        jne public_6eb4fc0
        jmp public_6eb5362
        public_6eb4fe7 : nop
        cmp eax, 0x2C
        je public_6eb5087
        cmp eax, 0x100B
        jne public_6eb5362
        mov edx, dword ptr ss : [esp+0xB4]
        add edx, 4
        push edx
        call public_6f49b00
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6eb5362
        mov ecx, esi
        call public_6f47980
        mov edi, eax
        test edi, edi
        je public_6eb5362
        mov ecx, esi
        call public_6f47990
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6eac110
        mov esi, eax
        test esi, esi
        je public_6eb5362
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6eb5362
        nop 
        lea esp, ss:[esp]
        public_6eb5060 : nop
        push eax
        call public_6f00b60
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x10]
        jne public_6eb5060
        jmp public_6eb5362
        public_6eb5087 : nop
        mov edi, dword ptr ss : [esp+0xB4]
        mov al, byte ptr ds : [edi+8]
        test al, al
        je public_6eb5362
        lea ebx, ds:[edi+0xC]
        push ebx
        mov dword ptr ss : [esp+0x24], ebx
        call public_6f49b00
        mov ebp, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, 2
        jne public_6eb527d
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_6fcef10
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x24]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eb5319
        mov ecx, dword ptr ds : [edi]
        lea ebx, ds:[ebx]
        public_6eb50e0 : nop
        cmp ecx, dword ptr ds : [esi+0xC]
        je public_6eb50f0
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6eb50e0
        jmp public_6eb5319
        public_6eb50f0 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], eax
        mov byte ptr ss : [esp+0x4C], al
        mov byte ptr ss : [esp+0x4D], al
        mov byte ptr ss : [esp+0x4E], al
        mov byte ptr ss : [esp+0x4F], al
        mov byte ptr ss : [esp+0x50], al
        mov byte ptr ss : [esp+0x51], al
        mov byte ptr ss : [esp+0x52], al
        mov byte ptr ss : [esp+0x53], al
        mov byte ptr ss : [esp+0x54], al
        mov byte ptr ss : [esp+0x55], al
        mov byte ptr ss : [esp+0x56], al
        mov byte ptr ss : [esp+0x57], al
        mov byte ptr ss : [esp+0x58], al
        mov byte ptr ss : [esp+0x59], al
        mov ecx, ebp
        mov dword ptr ss : [esp+0xA8], 4
        mov byte ptr ss : [esp+0x18], al
        call public_6f487d0
        test eax, eax
        jne public_6eb51e7
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x3C]
        push eax
        lea eax, ss:[esp+0x48]
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        call dword ptr ds : [edx+0x1C]
        test al, al
        mov byte ptr ss : [esp+0x18], al
        je public_6eb5202
        mov ecx, dword ptr ds : [esi+0x14]
        push 1
        push ecx
        lea edx, ds:[esi+0x1C]
        push edx
/*FIXUP push offset public_6fb4450 @0x6eb517c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4450
        call dword ptr ds : [public_6fb3614]
        add esp, 0x10
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_6fb3030]
        mov ecx, dword ptr ss : [esp+0x10]
        push 0
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        push ecx
        mov ecx, ebp
        call public_6f488b0
        mov eax, dword ptr ds : [edi+4]
        mov cl, byte ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi]
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x74], eax
        lea eax, ss:[esp+0x70]
        push eax
        mov byte ptr ss : [esp+0x7C], cl
        mov dword ptr ss : [esp+0x74], edx
        mov edx, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x14]
        push 0x2C
        push ecx
        mov dword ptr ss : [esp+0x88], edx
        call dword ptr ds : [public_6fb360c]
        add esp, 0xC
        jmp public_6eb5206
        public_6eb51e7 : nop
        push 0x730
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_6fb303c]
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_6fb3038]
        jmp public_6eb5206
        public_6eb5202 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        public_6eb5206 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x48]
        push eax
        lea edi, ds:[esi+8]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3670]
        mov al, byte ptr ss : [esp+0x28]
        add esp, 0x10
        test al, al
        je public_6eb5263
        push edi
        call dword ptr ds : [public_6fb3668]
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        add esp, 4
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [esi]
        lea edi, ds:[ecx+0x20]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        public_6eb5263 : nop
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xA8], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        jmp public_6eb5319
        public_6eb527d : nop
        cmp eax, 1
        jne public_6eb5319
        mov ecx, ebp
        call public_6f47980
        mov ecx, ebp
        mov esi, eax
        call public_6f47990
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], eax
        call public_6eac110
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [eax+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eb5319
        public_6eb52b3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, dword ptr ds : [edi]
        jne public_6eb530e
        lea edi, ds:[esi+8]
        push edi
        lea ecx, ds:[esi+0x5C]
        push ebp
        call public_6ea8d50
        test al, al
        je public_6eb5307
        push 0xFFFFFFFF
        mov ecx, edi
        call public_6ea7ce0
        mov dword ptr ss : [esp+0x34], 0
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0xAC], 5
        call public_6ea7ef0
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0xA8], 0xFFFFFFFF
        call public_6ea7c30
        public_6eb5307 : nop
        mov edi, dword ptr ss : [esp+0xB4]
        public_6eb530e : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+0x10]
        jne public_6eb52b3
        public_6eb5319 : nop
        test ebp, ebp
        je public_6eb5362
        mov ecx, ebp
        call public_6f47980
        mov esi, eax
        test esi, esi
        je public_6eb5362
        mov ecx, ebp
        call public_6f47990
        lea edx, ss:[esp+0x6C]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], eax
        call public_6eac110
        mov edi, eax
        test edi, edi
        je public_6eb5362
        mov eax, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eb5362
        public_6eb5350 : nop
        push esi
        call public_6f00b60
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+0x10]
        add esp, 4
        cmp esi, eax
        jne public_6eb5350
        public_6eb5362 : nop
        mov ecx, dword ptr ss : [esp+0xA0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x9C
        ret 8
        UNREACHABLE_TRAP(0x6eb4ba0)
    }
}

#undef public_6eb4cb7
#undef public_6eb4d00
#undef public_6eb4d27
#undef public_6eb4d73
#undef public_6eb4d87
#undef public_6eb4dbc
#undef public_6eb4dbd
#undef public_6eb4dd6
#undef public_6eb4de2
#undef public_6eb4e54
#undef public_6eb4e70
#undef public_6eb4ebd
#undef public_6eb4ecf
#undef public_6eb4f5d
#undef public_6eb4fc0
#undef public_6eb4fe7
#undef public_6eb5060
#undef public_6eb5087
#undef public_6eb50e0
#undef public_6eb50f0
#undef public_6eb51e7
#undef public_6eb5202
#undef public_6eb5206
#undef public_6eb5263
#undef public_6eb527d
#undef public_6eb52b3
#undef public_6eb5307
#undef public_6eb530e
#undef public_6eb5319
#undef public_6eb5350
#undef public_6eb5362
