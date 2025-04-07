#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_415860);
CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4e8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_4ea670);
CLANG_FORWARD_PROC_SYMBOL(public_4f34c0);
CLANG_FORWARD_PROC_SYMBOL(public_55a360);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_59f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bec1f);

#define public_4e977d _public_4e977d
#define public_4e9efa _public_4e9efa
#define public_4e9f69 _public_4e9f69
#define public_4e9fd8 _public_4e9fd8
#define public_4ea047 _public_4ea047
#define public_4ea0b6 _public_4ea0b6
#define public_4ea125 _public_4ea125
#define public_4ea194 _public_4ea194
#define public_4ea203 _public_4ea203
#define public_4ea272 _public_4ea272
#define public_4ea2e1 _public_4ea2e1
#define public_4ea350 _public_4ea350
#define public_4ea3bf _public_4ea3bf
#define public_4ea42e _public_4ea42e
#define public_4ea49d _public_4ea49d
#define public_4ea52c _public_4ea52c
#define public_4ea58f _public_4ea58f
#define public_4ea5c2 _public_4ea5c2
#define public_4ea5de _public_4ea5de
#define public_4ea5e1 _public_4ea5e1

PROC_DECLARE(0x4e8fe0, internal_4e8fe0, public_4e8fe0);
extern "C" NAKED register_t __cdecl internal_4e8fe0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bec1f @0x4e8fe2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bec1f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x150
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        xor ebx, ebx
        lea esi, ss:[ebp+0x28]
        mov ecx, esi
        mov dword ptr ss : [ebp+4], ebx
        mov byte ptr ss : [ebp+8], bl
        push edi
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        push ebx
        mov dword ptr ss : [esp+0x16C], ebx
        call dword ptr ds : [public_5c645c]
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x16C], 1
        mov dword ptr ss : [ebp], offset public_5d6eac
        mov dword ptr ss : [ebp+0x34], ebx
        call dword ptr ds : [public_5c645c]
        mov dword ptr ss : [ebp+0x30], ebx
        lea ecx, ss:[ebp+0x38]
        mov dword ptr ss : [esp+0x168], 2
        call public_59f860
        mov dword ptr ss : [ebp+0x364], offset public_5cbed8
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [ebp+0x370], al
        mov dword ptr ss : [ebp+0x374], ebx
        mov dword ptr ss : [ebp+0x378], ebx
        mov dword ptr ss : [ebp+0x37C], ebx
        lea ecx, ss:[ebp+0x384]
        mov eax, ebx
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov ecx, ebx
        mov dword ptr ds : [esi+4], ecx
        mov edx, ebx
        mov dword ptr ds : [esi+8], edx
        lea esi, ss:[ebp+0x390]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ss : [ebp+0x380], ebx
        mov dword ptr ss : [ebp+0x39C], ebx
        mov dword ptr ss : [ebp+0x3A0], ebx
        mov byte ptr ss : [ebp+0x3A4], bl
        mov dword ptr ss : [ebp+0x3A8], ebx
        mov byte ptr ss : [ebp+0x3AC], bl
        mov byte ptr ss : [ebp+0x3AD], bl
        mov byte ptr ss : [ebp+0x3AE], bl
        mov byte ptr ss : [ebp+0x3AF], 1
        mov byte ptr ss : [ebp+0x3B0], bl
        mov byte ptr ss : [ebp+0x3B1], bl
        lea edx, ss:[ebp+0x3B8]
        mov esi, edx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov edx, ebx
        mov dword ptr ds : [esi+8], edx
        lea esi, ss:[ebp+0x3C4]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x168], 5
        mov dword ptr ss : [ebp+0x3B4], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ss : [ebp+0x3D0], ebx
        mov dword ptr ss : [ebp+0x3D4], ebx
        mov byte ptr ss : [ebp+0x3D8], bl
        mov dword ptr ss : [ebp+0x3DC], ebx
        mov byte ptr ss : [ebp+0x3E0], bl
        mov byte ptr ss : [ebp+0x3E1], bl
        mov byte ptr ss : [ebp+0x3E2], bl
        mov byte ptr ss : [ebp+0x3E3], 1
        mov byte ptr ss : [ebp+0x3E4], bl
        mov byte ptr ss : [ebp+0x3E5], bl
        mov dword ptr ss : [ebp+0x3F0], ebx
        or edi, 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x3F4], edi
        mov dword ptr ss : [ebp+0x3F8], ebx
        mov dword ptr ss : [ebp+0x3FC], ebx
        mov dword ptr ss : [ebp+0x400], ebx
        lea ecx, ss:[ebp+0x450]
        mov dword ptr ss : [ebp+0x404], ebx
        call public_420d40
        mov esi, 0x3F800000
        mov dword ptr ss : [ebp+0x470], esi
        mov dword ptr ss : [ebp+0x46C], esi
        mov dword ptr ss : [ebp+0x468], esi
        mov dword ptr ss : [ebp+0x464], esi
        mov dword ptr ss : [ebp+0x474], esi
        mov dword ptr ss : [ebp+0x450], offset public_5d2efc
        mov dword ptr ss : [ebp+0x460], edi
        lea ecx, ss:[ebp+0x478]
        mov byte ptr ss : [esp+0x168], 6
        call public_420d40
        mov dword ptr ss : [ebp+0x498], esi
        mov dword ptr ss : [ebp+0x494], esi
        mov dword ptr ss : [ebp+0x490], esi
        mov dword ptr ss : [ebp+0x48C], esi
        mov dword ptr ss : [ebp+0x49C], esi
        mov dword ptr ss : [ebp+0x478], offset public_5d2efc
        mov dword ptr ss : [ebp+0x488], edi
        lea ecx, ss:[ebp+0x4A0]
        mov byte ptr ss : [esp+0x168], 7
        call public_420d40
        mov dword ptr ss : [ebp+0x4C0], esi
        mov dword ptr ss : [ebp+0x4BC], esi
        mov dword ptr ss : [ebp+0x4B8], esi
        mov dword ptr ss : [ebp+0x4B4], esi
        mov dword ptr ss : [ebp+0x4C4], esi
        mov dword ptr ss : [ebp+0x4A0], offset public_5d2efc
        mov dword ptr ss : [ebp+0x4B0], edi
        lea ecx, ss:[ebp+0x4C8]
        mov byte ptr ss : [esp+0x168], 8
        call public_420d40
        mov dword ptr ss : [ebp+0x4E8], esi
        mov dword ptr ss : [ebp+0x4E4], esi
        mov dword ptr ss : [ebp+0x4E0], esi
        mov dword ptr ss : [ebp+0x4DC], esi
        mov dword ptr ss : [ebp+0x4EC], esi
        mov dword ptr ss : [ebp+0x4C8], offset public_5d2efc
        mov dword ptr ss : [ebp+0x4D8], edi
        lea ecx, ss:[ebp+0x4F0]
        mov byte ptr ss : [esp+0x168], 9
        call public_420d40
        mov dword ptr ss : [ebp+0x510], esi
        mov dword ptr ss : [ebp+0x50C], esi
        mov dword ptr ss : [ebp+0x508], esi
        mov dword ptr ss : [ebp+0x504], esi
        mov dword ptr ss : [ebp+0x514], esi
        mov dword ptr ss : [ebp+0x4F0], offset public_5d2efc
        mov dword ptr ss : [ebp+0x500], edi
        lea ecx, ss:[ebp+0x518]
        mov byte ptr ss : [esp+0x168], 0xA
        call public_420d40
        mov dword ptr ss : [ebp+0x538], esi
        mov dword ptr ss : [ebp+0x534], esi
        mov dword ptr ss : [ebp+0x530], esi
        mov dword ptr ss : [ebp+0x52C], esi
        mov dword ptr ss : [ebp+0x53C], esi
        mov dword ptr ss : [ebp+0x518], offset public_5d2efc
        mov dword ptr ss : [ebp+0x528], edi
        lea ecx, ss:[ebp+0x540]
        mov byte ptr ss : [esp+0x168], 0xB
        call public_420d40
        mov dword ptr ss : [ebp+0x560], esi
        mov dword ptr ss : [ebp+0x55C], esi
        mov dword ptr ss : [ebp+0x558], esi
        mov dword ptr ss : [ebp+0x554], esi
        mov dword ptr ss : [ebp+0x564], esi
        mov dword ptr ss : [ebp+0x540], offset public_5d2efc
        mov dword ptr ss : [ebp+0x550], edi
        lea ecx, ss:[ebp+0x568]
        mov byte ptr ss : [esp+0x168], 0xC
        call public_420d40
        mov dword ptr ss : [ebp+0x588], esi
        mov dword ptr ss : [ebp+0x584], esi
        mov dword ptr ss : [ebp+0x580], esi
        mov dword ptr ss : [ebp+0x57C], esi
        mov dword ptr ss : [ebp+0x58C], esi
        mov dword ptr ss : [ebp+0x568], offset public_5d2efc
        mov dword ptr ss : [ebp+0x578], edi
        lea ecx, ss:[ebp+0x590]
        mov byte ptr ss : [esp+0x168], 0xD
        call public_420d40
        mov dword ptr ss : [ebp+0x5B0], esi
        mov dword ptr ss : [ebp+0x5AC], esi
        mov dword ptr ss : [ebp+0x5A8], esi
        mov dword ptr ss : [ebp+0x5A4], esi
        mov dword ptr ss : [ebp+0x5B4], esi
        mov dword ptr ss : [ebp+0x590], offset public_5d2efc
        mov dword ptr ss : [ebp+0x5A0], edi
        lea ecx, ss:[ebp+0x5B8]
        mov byte ptr ss : [esp+0x168], 0xE
        call public_420d40
        mov dword ptr ss : [ebp+0x5D8], esi
        mov dword ptr ss : [ebp+0x5D4], esi
        mov dword ptr ss : [ebp+0x5D0], esi
        mov dword ptr ss : [ebp+0x5CC], esi
        mov dword ptr ss : [ebp+0x5DC], esi
        mov dword ptr ss : [ebp+0x5B8], offset public_5d2efc
        mov dword ptr ss : [ebp+0x5C8], edi
        lea ecx, ss:[ebp+0x5E0]
        mov byte ptr ss : [esp+0x168], 0xF
        call public_420d40
        mov dword ptr ss : [ebp+0x600], esi
        mov dword ptr ss : [ebp+0x5FC], esi
        mov dword ptr ss : [ebp+0x5F8], esi
        mov dword ptr ss : [ebp+0x5F4], esi
        mov dword ptr ss : [ebp+0x604], esi
        mov dword ptr ss : [ebp+0x5E0], offset public_5d2efc
        mov dword ptr ss : [ebp+0x5F0], edi
        lea ecx, ss:[ebp+0x628]
        mov byte ptr ss : [esp+0x168], 0x10
        call public_420d40
        mov dword ptr ss : [ebp+0x648], esi
        mov dword ptr ss : [ebp+0x644], esi
        mov dword ptr ss : [ebp+0x640], esi
        mov dword ptr ss : [ebp+0x63C], esi
        mov dword ptr ss : [ebp+0x64C], esi
        mov dword ptr ss : [ebp+0x628], offset public_5d2efc
        mov dword ptr ss : [ebp+0x638], edi
        lea ecx, ss:[ebp+0x650]
        mov byte ptr ss : [esp+0x168], 0x11
        call public_420d40
        mov dword ptr ss : [ebp+0x670], esi
        mov dword ptr ss : [ebp+0x66C], esi
        mov dword ptr ss : [ebp+0x668], esi
        mov dword ptr ss : [ebp+0x664], esi
        mov dword ptr ss : [ebp+0x674], esi
        mov dword ptr ss : [ebp+0x650], offset public_5d2efc
        mov dword ptr ss : [ebp+0x660], edi
        lea ecx, ss:[ebp+0x678]
        mov byte ptr ss : [esp+0x168], 0x12
        call public_420d40
        mov dword ptr ss : [ebp+0x698], esi
        mov dword ptr ss : [ebp+0x694], esi
        mov dword ptr ss : [ebp+0x690], esi
        mov dword ptr ss : [ebp+0x68C], esi
        mov dword ptr ss : [ebp+0x69C], esi
        mov dword ptr ss : [ebp+0x678], offset public_5d2efc
        mov dword ptr ss : [ebp+0x688], edi
        lea ecx, ss:[ebp+0x6A0]
        mov byte ptr ss : [esp+0x168], 0x13
        call public_420d40
        mov dword ptr ss : [ebp+0x6C0], esi
        mov dword ptr ss : [ebp+0x6BC], esi
        mov dword ptr ss : [ebp+0x6B8], esi
        mov dword ptr ss : [ebp+0x6B4], esi
        mov dword ptr ss : [ebp+0x6C4], esi
        mov dword ptr ss : [ebp+0x6A0], offset public_5d2efc
        mov dword ptr ss : [ebp+0x6B0], edi
        lea ecx, ss:[ebp+0x6C8]
        mov byte ptr ss : [esp+0x168], 0x14
        call public_420d40
        mov dword ptr ss : [ebp+0x6E8], esi
        mov dword ptr ss : [ebp+0x6E4], esi
        mov dword ptr ss : [ebp+0x6E0], esi
        mov dword ptr ss : [ebp+0x6DC], esi
        mov dword ptr ss : [ebp+0x6EC], esi
        mov dword ptr ss : [ebp+0x6C8], offset public_5d2efc
        mov dword ptr ss : [ebp+0x6D8], edi
        lea ecx, ss:[ebp+0x6F0]
        mov byte ptr ss : [esp+0x168], 0x15
        call public_420d40
        mov dword ptr ss : [ebp+0x710], esi
        mov dword ptr ss : [ebp+0x70C], esi
        mov dword ptr ss : [ebp+0x708], esi
        mov dword ptr ss : [ebp+0x704], esi
        mov dword ptr ss : [ebp+0x714], esi
        mov dword ptr ss : [ebp+0x6F0], offset public_5d2efc
        mov dword ptr ss : [ebp+0x700], edi
        lea ecx, ss:[ebp+0x718]
        mov byte ptr ss : [esp+0x168], 0x16
        call public_420d40
        mov dword ptr ss : [ebp+0x738], esi
        mov dword ptr ss : [ebp+0x734], esi
        mov dword ptr ss : [ebp+0x730], esi
        mov dword ptr ss : [ebp+0x72C], esi
        mov dword ptr ss : [ebp+0x73C], esi
        mov dword ptr ss : [ebp+0x718], offset public_5d2efc
        mov dword ptr ss : [ebp+0x728], edi
        lea ecx, ss:[ebp+0x740]
        mov byte ptr ss : [esp+0x168], 0x17
        call public_420d40
        mov dword ptr ss : [ebp+0x760], esi
        mov dword ptr ss : [ebp+0x75C], esi
        mov dword ptr ss : [ebp+0x758], esi
        mov dword ptr ss : [ebp+0x754], esi
        mov dword ptr ss : [ebp+0x764], esi
        mov dword ptr ss : [ebp+0x740], offset public_5d2efc
        mov dword ptr ss : [ebp+0x750], edi
        lea ecx, ss:[ebp+0x7DC]
        mov byte ptr ss : [esp+0x168], 0x18
        call public_4144b0
        lea ecx, ss:[ebp+0x810]
        mov byte ptr ss : [esp+0x168], 0x19
        call public_4144b0
        lea ecx, ss:[ebp+0x854]
        mov byte ptr ss : [esp+0x168], 0x1A
        call public_4144b0
        lea ecx, ss:[ebp+0x888]
        mov byte ptr ss : [esp+0x168], 0x1B
        call public_4144b0
        mov byte ptr ss : [esp+0x168], 0x1C
        lea ecx, ss:[ebp+0x8C0]
        call public_4144b0
        mov al, byte ptr ss : [esp+0x13]
        mov dl, byte ptr ss : [esp+0x13]
        lea ecx, ss:[ebp+0x8FC]
        mov byte ptr ss : [esp+0x168], 0x1D
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_4f34c0
        mov al, byte ptr ss : [esp+0x13]
        push 0x28
        mov byte ptr ss : [esp+0x16C], 0x1E
        mov byte ptr ss : [ebp+0x910], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [ebp+0x914], eax
        mov dword ptr ss : [ebp+0x918], ebx
/*FIXUP push offset public_5d9538 @0x4e9710*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9538
        lea ecx, ss:[ebp+8]
        lea edi, ss:[ebp+0x38]
        push 0x20
        mov dword ptr ss : [ebp], offset public_5d950c
        mov dword ptr ds : [edi], offset public_5d9454
        mov dword ptr ss : [ebp+0xB4], offset public_5d9448
        mov dword ptr ss : [ebp+0x364], offset public_5d9440
        push ecx
        mov byte ptr ss : [esp+0x178], 0x1F
        mov dword ptr ds : [public_674b70], ebp
        call public_417c50
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [edi]
        add esp, 0x10
        lea eax, ds:[edi+0x60]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x14]
        push ebx
        push ebx
        mov ecx, edi
        call public_4b5060
        test al, al
        je public_4e977d
        push 6
        lea ecx, ss:[ebp+0x364]
        call public_5760d0
/*FIXUP public_4e977d : nop
        push offset public_5d9538 @0x4e977d*/
  FIXUP public_4e977d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9538
        lea ecx, ss:[ebp+0x50]
        push 0x20
        push ecx
        call public_417c50
        mov dword ptr ss : [ebp+0x4C], eax
        mov dword ptr ss : [ebp+0x48], offset public_5d9538
        mov byte ptr ss : [ebp+0x3B1], 1
        mov byte ptr ss : [ebp+0x3E4], 1
        mov dword ptr ss : [ebp+0x368], ebx
        mov dword ptr ss : [ebp+0x36C], ebx
        mov dword ptr ss : [ebp+0x408], ebx
        mov eax, 0x200
        mov dword ptr ss : [ebp+0x380], eax
        mov dword ptr ss : [ebp+0x3B4], eax
        mov edx, dword ptr ds : [public_5d8ef0]
        mov dword ptr ss : [ebp+0x420], edx
        mov eax, dword ptr ds : [public_5d8ef0]
        mov dword ptr ss : [ebp+0x424], eax
        mov byte ptr ss : [ebp+0x428], 1
        mov ecx, dword ptr ds : [public_5d8ef4]
        add esp, 0xC
        mov dword ptr ss : [ebp+0x42C], ecx
        mov edx, dword ptr ds : [public_5d8ef4]
        push ebx
        mov dword ptr ss : [ebp+0x430], edx
        mov byte ptr ss : [ebp+0x434], 1
        mov eax, dword ptr ds : [public_5d8efc]
        push ebx
        mov dword ptr ss : [ebp+0x438], eax
        push 1
        mov byte ptr ss : [ebp+0x43C], 1
        mov ecx, dword ptr ds : [public_5d8f00]
        push 0x453
        mov dword ptr ss : [ebp+0x440], ecx
        mov byte ptr ss : [ebp+0x444], bl
        mov edx, dword ptr ds : [public_5c6368]
        mov ax, word ptr ds : [edx]
        push esi
        push 0x3CF5C28F
        mov word ptr ss : [ebp+0x446], ax
        mov dword ptr ss : [ebp+0x448], ebx
        mov ecx, dword ptr ds : [public_5d8f0c]
        push ecx
        push ebx
        lea edx, ss:[esp+0x3C]
        push edx
        mov al, 0xFF
/*FIXUP push offset public_5d4ddc @0x4e9860*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
        lea esi, ss:[ebp+0x38]
/*FIXUP push offset public_5d9428 @0x4e9868*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9428
        mov ecx, esi
        mov byte ptr ss : [esp+0x84], al
        mov byte ptr ss : [esp+0x85], al
        mov byte ptr ss : [esp+0x86], al
        mov byte ptr ss : [esp+0x87], al
        mov dword ptr ss : [esp+0x48], 0x3B449BA6
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        call public_5a0e30
        push ebx
        push 1
        mov dword ptr ss : [ebp+0x40C], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0x40C]
        mov eax, dword ptr ds : [ecx]
        push 1
        lea edx, ss:[esp+0x5C]
        push edx
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x4C], 0x3C9374BC
        mov dword ptr ss : [esp+0x50], 0x3C9374BC
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x40], 0x3E010625
        lea eax, ss:[esp+0x1C]
        push eax
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x78]
        push ecx
        push ebx
        lea edx, ss:[esp+0x74]
        push edx
/*FIXUP push offset public_5d9404 @0x4e9928*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9404
/*FIXUP push offset public_5d93f4 @0x4e992d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d93f4
        mov ecx, esi
        mov dword ptr ss : [esp+0x84], 0x3E5A1CAC
        mov dword ptr ss : [esp+0x88], 0xBF19999A
        call public_5a0db0
/*FIXUP push offset public_679ba8 @0x4e994f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
/*FIXUP push offset public_679ba8 @0x4e9954*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
        mov dword ptr ss : [ebp+0x410], eax
        mov edx, dword ptr ds : [eax]
        push 0x18
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0x410]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 0x4D0
        push 3
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [ebp+0x410]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        lea eax, ss:[esp+0x40]
        push eax
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x78]
        push ecx
        push ebx
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5d93d0 @0x4e99b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d93d0
/*FIXUP push offset public_5d93c4 @0x4e99b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d93c4
        mov ecx, esi
        mov dword ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x8C], 0x3C9374BC
        mov dword ptr ss : [esp+0x90], 0x3C9374BC
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x5C], 0xBE010625
        mov dword ptr ss : [esp+0x60], 0x3E5A1CAC
        mov dword ptr ss : [esp+0x64], 0xBF19999A
        call public_5a0db0
/*FIXUP push offset public_679ba8 @0x4e9a1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
/*FIXUP push offset public_679ba8 @0x4e9a20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
        mov dword ptr ss : [ebp+0x414], eax
        mov edx, dword ptr ds : [eax]
        push 0x18
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0x414]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 0x616
        push 3
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [ebp+0x414]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        lea eax, ss:[esp+0x40]
        push eax
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x78]
        push ecx
        push ebx
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5d939c @0x4e9a7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d939c
/*FIXUP push offset public_5d938c @0x4e9a81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d938c
        mov ecx, esi
        mov dword ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x8C], 0x3C9374BC
        mov dword ptr ss : [esp+0x90], 0x3C9374BC
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x5C], 0x3E010625
        mov dword ptr ss : [esp+0x60], 0x3E353F7D
        mov dword ptr ss : [esp+0x64], 0xBF19999A
        call public_5a0db0
/*FIXUP push offset public_679ba8 @0x4e9ae7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
/*FIXUP push offset public_679ba8 @0x4e9aec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
        mov dword ptr ss : [ebp+0x418], eax
        mov edx, dword ptr ds : [eax]
        push 0x18
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0x418]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 0x617
        push 3
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [ebp+0x418]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        lea eax, ss:[esp+0x40]
        push eax
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x74], 0x3C9374BC
        mov dword ptr ss : [esp+0x78], 0x3C9374BC
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x44], 0xBE010625
        mov dword ptr ss : [esp+0x48], 0x3E353F7D
        mov dword ptr ss : [esp+0x4C], 0xBF19999A
        push ebx
        lea ecx, ss:[esp+0x78]
        push ecx
        push ebx
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5d9368 @0x4e9b90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9368
/*FIXUP push offset public_5d935c @0x4e9b95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d935c
        mov ecx, esi
        call public_5a0db0
/*FIXUP push offset public_679ba8 @0x4e9ba1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
/*FIXUP push offset public_679ba8 @0x4e9ba6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
        mov dword ptr ss : [ebp+0x41C], eax
        mov edx, dword ptr ds : [eax]
        push 0x18
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0x41C]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        push 1
        push ebx
/*FIXUP push offset public_5d9338 @0x4e9bd3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9338
        lea ecx, ss:[ebp+0x450]
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d9310 @0x4e9be6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9310
        lea ecx, ss:[ebp+0x478]
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d92e8 @0x4e9bf9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d92e8
        lea ecx, ss:[ebp+0x4A0]
        call public_59ec80
        push 1
        push ebx
        lea esi, ss:[ebp+0x4C8]
/*FIXUP push offset public_5d92c4 @0x4e9c12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d92c4
        mov ecx, esi
        call public_59ec80
        push 1
        push ebx
        lea edi, ss:[ebp+0x4F0]
/*FIXUP push offset public_5d92a0 @0x4e9c27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d92a0
        mov ecx, edi
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d9278 @0x4e9c36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9278
        lea ecx, ss:[ebp+0x518]
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d9250 @0x4e9c49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9250
        lea ecx, ss:[ebp+0x540]
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d9224 @0x4e9c5c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9224
        lea ecx, ss:[ebp+0x568]
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d91f4 @0x4e9c6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d91f4
        lea ecx, ss:[ebp+0x5B8]
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d91d4 @0x4e9c82*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d91d4
        lea ecx, ss:[ebp+0x5E0]
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d91a4 @0x4e9c95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d91a4
        lea ecx, ss:[ebp+0x590]
        call public_59ec80
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_59f0d0
        fld dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [ebp+0x608], edx
        fstp dword ptr ss : [ebp+0x610]
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [ebp+0x614], ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [ebp+0x60C], eax
        call public_59f0d0
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x38]
        push 1
        fstp dword ptr ss : [ebp+0x620]
        push ebx
        mov dword ptr ss : [ebp+0x61C], ecx
        lea esi, ss:[ebp+0x628]
/*FIXUP push offset public_5d9184 @0x4e9d12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9184
        mov ecx, esi
        mov dword ptr ss : [ebp+0x618], eax
        mov dword ptr ss : [ebp+0x624], edx
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d915c @0x4e9d2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d915c
        lea ecx, ss:[ebp+0x650]
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d9134 @0x4e9d40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9134
        lea ecx, ss:[ebp+0x678]
        call public_59ec80
        push 1
        push ebx
        lea edi, ss:[ebp+0x6A0]
/*FIXUP push offset public_5d910c @0x4e9d59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d910c
        mov ecx, edi
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d90e4 @0x4e9d68*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d90e4
        lea ecx, ss:[ebp+0x6C8]
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d90bc @0x4e9d7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d90bc
        lea ecx, ss:[ebp+0x6F0]
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d9094 @0x4e9d8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9094
        lea ecx, ss:[ebp+0x718]
        call public_59ec80
        push 1
        push ebx
/*FIXUP push offset public_5d9068 @0x4e9da1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9068
        lea ecx, ss:[ebp+0x740]
        call public_59ec80
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[ebp+0x6F0]
        call public_59f0d0
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [ebp+0x768]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [ebp+0x76C]
        call public_59f0d0
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [ebp+0x770], edx
        fld dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [ebp+0x77C]
        mov dword ptr ss : [ebp+0x774], eax
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [ebp+0x778]
        call public_59f0d0
        mov edx, dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [ebp+0x780], edx
        lea edx, ss:[esp+0x28]
        fstp dword ptr ss : [ebp+0x788]
        mov dword ptr ss : [ebp+0x78C], ecx
        push edx
        lea ecx, ss:[ebp+0x6C8]
        mov dword ptr ss : [ebp+0x784], eax
        call public_59f0d0
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        sub esp, 0x10
        fstp dword ptr ss : [ebp+0x798]
        mov esi, esp
        mov dword ptr ss : [ebp+0x790], eax
        mov al, byte ptr ss : [esp+0x23]
        mov dword ptr ss : [ebp+0x794], ecx
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x79C], edx
        mov byte ptr ss : [ebp+0x44C], bl
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], esi
        mov byte ptr ds : [esi], al
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d9054
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4e9efa
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d9054
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4e9efa : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7A0], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d9040
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4e9f69
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d9040
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4e9f69 : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7B0], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d9030
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4e9fd8
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d9030
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4e9fd8 : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7B4], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d9020
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4ea047
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d9020
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4ea047 : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7B8], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d9014
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4ea0b6
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d9014
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4ea0b6 : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7BC], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d9004
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4ea125
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d9004
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4ea125 : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7C0], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d8ff8
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4ea194
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d8ff8
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4ea194 : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7C4], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d8fec
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4ea203
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d8fec
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4ea203 : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7C8], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d8fd8
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4ea272
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d8fd8
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4ea272 : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7A4], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d8fbc
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4ea2e1
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d8fbc
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4ea2e1 : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7A8], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d8fa4
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4ea350
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d8fa4
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4ea350 : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7AC], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d8f90
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4ea3bf
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d8f90
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4ea3bf : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7CC], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d8f7c
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4ea42e
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d8f7c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4ea42e : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7D0], eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d8f64
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4ea49d
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d8f64
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_4ea49d : nop
        call public_55a360
        mov dl, byte ptr ss : [esp+0x23]
        mov esi, esp
        mov dword ptr ss : [esp+0x24], esp
        mov dword ptr ss : [ebp+0x7D4], eax
        push ebx
        mov ecx, esi
        mov byte ptr ds : [esi], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d8f4c
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_5d8f4c @0x4ea4cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8f4c
        mov ecx, esi
        call dword ptr ds : [public_5c7088]
        call public_55a360
/*FIXUP push offset public_5d4ddc @0x4ea4df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
        mov dword ptr ss : [ebp+0x7D8], eax
        call public_4177b0
/*FIXUP push offset public_5d6b98 @0x4ea4ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b98
        mov dword ptr ss : [ebp+0x8F4], eax
        call public_4177b0
        mov dword ptr ss : [ebp+0x8F8], eax
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x80
        lea eax, ss:[esp+0x7C]
        push eax
        push 0x442
        push ecx
        call public_4347e0
        add esp, 0x28
        test eax, eax
        jne public_4ea52c
        mov word ptr ss : [esp+0x60], bx
        public_4ea52c : nop
        fld dword ptr ss : [ebp+0x768]
        mov edx, dword ptr ss : [ebp+0x8F4]
        fadd st(0), st
        lea esi, ss:[ebp+0x7DC]
        push edx
        mov ecx, esi
        fstp dword ptr ss : [esp+0x18]
        call public_4ea670
        mov eax, dword ptr ss : [esp+0x14]
        push 0xBF800000
        push eax
        mov ecx, esi
        call public_4145d0
        lea ecx, ss:[esp+0x60]
        push ecx
        mov ecx, esi
        call public_415860
        mov eax, dword ptr ds : [public_67eca8]
        push 0x80
        lea edx, ss:[esp+0x64]
        push edx
        push 0x443
        push eax
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4ea58f
        mov word ptr ss : [esp+0x60], bx
        public_4ea58f : nop
        fld dword ptr ss : [ebp+0x768]
        mov eax, dword ptr ss : [ebp+0x8F4]
        mov ecx, dword ptr ss : [ebp+0x82C]
        fadd st(0), st
        cmp ecx, eax
        lea esi, ss:[ebp+0x810]
        fstp dword ptr ss : [esp+0x14]
        je public_4ea5e1
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+0x1C], eax
        xor edi, edi
        call public_5995f0
        test eax, eax
        jbe public_4ea5de
        public_4ea5c2 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [ecx+edi*8]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        lea ecx, ds:[esi+0xC]
        inc edi
        call public_5995f0
        cmp edi, eax
        jb public_4ea5c2
        public_4ea5de : nop
        mov dword ptr ds : [esi+0x28], ebx
        public_4ea5e1 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push 0xBF800000
        push ecx
        mov ecx, esi
        call public_4145d0
        lea edx, ss:[esp+0x60]
        push edx
        mov ecx, esi
        call public_415860
        mov ecx, dword ptr ss : [esp+0x160]
        mov dword ptr ss : [ebp+0x844], ebx
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x848], eax
        mov dword ptr ss : [ebp+0x84C], eax
        mov dword ptr ss : [ebp+0x8BC], eax
        mov dword ptr ss : [ebp+0x850], ebx
        mov dword ptr ss : [ebp+0x924], ebx
        mov dword ptr ss : [ebp+0x920], ebx
        mov dword ptr ss : [ebp+0x91C], ebx
        pop edi
        mov byte ptr ss : [ebp+0x928], bl
        mov dword ptr ss : [ebp+0x92C], ebx
        mov dword ptr ss : [ebp+0x930], ebx
        mov dword ptr ss : [ebp+0x934], ebx
        mov byte ptr ss : [ebp+0x938], bl
        pop esi
        mov eax, ebp
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x15C
        ret 4
        UNREACHABLE_TRAP(0x4e8fe0)
    }
}

#undef public_4e977d
#undef public_4e9efa
#undef public_4e9f69
#undef public_4e9fd8
#undef public_4ea047
#undef public_4ea0b6
#undef public_4ea125
#undef public_4ea194
#undef public_4ea203
#undef public_4ea272
#undef public_4ea2e1
#undef public_4ea350
#undef public_4ea3bf
#undef public_4ea42e
#undef public_4ea49d
#undef public_4ea52c
#undef public_4ea58f
#undef public_4ea5c2
#undef public_4ea5de
#undef public_4ea5e1
